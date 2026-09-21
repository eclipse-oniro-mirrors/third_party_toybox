#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Copyright (c) 2026 Huawei Device Co., Ltd.
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
import argparse
import shutil
import sys
from pathlib import Path


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--input-dir", required=True, help="Source directory")
    parser.add_argument("--output-dir", required=True, help="Destination directory")
    parser.add_argument("--file-copy", action="append", default=[], help="Name of file to copy")
    parser.add_argument("--file-newtoys", help="Name of file to filter")
    parser.add_argument("--file-config", action="append", default=[], help="Config file(s) for CFG_TOYBOX replacement")
    parser.add_argument("--name", help="command name to filter")
    parser.add_argument("--disable-config", action="append", default=[], help="command name to filter")
    args = parser.parse_args()
    input_dir = Path(args.input_dir)
    output_dir = Path(args.output_dir)

    # Validate input directory
    if not input_dir.exists():
        raise FileNotFoundError(f"Input directory not found: {input_dir}")

    # Create output directory
    output_dir.mkdir(parents=True, exist_ok=True)

    # Copy headers
    for file_to_copy in args.file_copy:
        copy_src = input_dir / file_to_copy
        copy_dst = output_dir / file_to_copy
        if copy_src.is_file():
            shutil.copy(copy_src, copy_dst)
        elif copy_src.is_dir():
            copy_dst.mkdir(parents=True, exist_ok=True)
            for header in copy_src.glob("*.h"):
                if header.is_file():
                    shutil.copy(header, copy_dst / header.name)

    # Filter newtoys.h
    if args.file_newtoys is not None:
        src_fileb = input_dir / args.file_newtoys
        dst_fileb = output_dir / args.file_newtoys
        dst_fileb.parent.mkdir(parents=True, exist_ok=True)

        with open(src_fileb, 'r') as f:
            filtered_lines = [line for line in f if args.name.upper() in line]

        with open(dst_fileb, 'w') as f:
            f.writelines(filtered_lines)

    # Disable Configs
    for to_be_disabled in args.disable_config:
        for config_file in args.file_config:
            src = input_dir / config_file
            dst = output_dir / config_file
            dst.parent.mkdir(parents=True, exist_ok=True)
            with open(src, 'r') as f:
                content = f.read()
            content = content.replace(f"{to_be_disabled} 1", f"{to_be_disabled} 0")
            with open(dst, 'w') as f:
                f.write(content)

if __name__ == "__main__":
    sys.exit(main())