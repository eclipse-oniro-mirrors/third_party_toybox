#ifdef TOYBOX_EXTENDED_CMD
#define CFG_DIFF 1
#define USE_DIFF(...) __VA_ARGS__
#define CFG_TELNET 1
#define USE_TELNET(...) __VA_ARGS__
#define CFG_TRACEROUTE 1
#define USE_TRACEROUTE(...) __VA_ARGS__
#define CFG_AWK 1
#define USE_AWK(...) __VA_ARGS__
#define CFG_WGET 1
#define USE_WGET(...) __VA_ARGS__
#define CFG_WGET_LIBTLS 0
#define USE_WGET_LIBTLS(...)
#define CFG_MKPASSWD 1
#define USE_MKPASSWD(...) __VA_ARGS__
#define CFG_TOYBOX_PRLIMIT 1
#define USE_TOYBOX_PRLIMIT(...) __VA_ARGS__
#define CFG_ULIMIT 1
#define USE_ULIMIT(...) __VA_ARGS__
#define CFG_EXPR 1
#define USE_EXPR(...) __VA_ARGS__
#define CFG_SHA384SUM 1
#define USE_SHA384SUM(...) __VA_ARGS__
#define CFG_SHA512SUM 1
#define USE_SHA512SUM(...) __VA_ARGS__
#define CFG_W 1
#define USE_W(...) __VA_ARGS__
#define CFG_RENICE 1
#define USE_RENICE(...) __VA_ARGS__
#define CFG_INOTIFYD 1
#define USE_INOTIFYD(...) __VA_ARGS__
#define CFG_USLEEP 1
#define USE_USLEEP(...) __VA_ARGS__
#define CFG_SHRED 1
#define USE_SHRED(...) __VA_ARGS__
#define CFG_LSPCI 1
#define USE_LSPCI(...) __VA_ARGS__
#define CFG_LSUSB 1
#define USE_LSUSB(...) __VA_ARGS__
#define CFG_VMSTAT 1
#define USE_VMSTAT(...) __VA_ARGS__
#define CFG_GETCONF 1
#define USE_GETCONF(...) __VA_ARGS__
#define CFG_TR 1
#define USE_TR(...) __VA_ARGS__
#define CFG_SETFATTR 1
#define USE_SETFATTR(...) __VA_ARGS__
#define CFG_GETFATTR 1
#define USE_GETFATTR(...) __VA_ARGS__
#define CFG_INSTALL 1
#define USE_INSTALL(...) __VA_ARGS__
#define CFG_IPCS 1
#define USE_IPCS(...) __VA_ARGS__
#define CFG_NETCAT 1
#define USE_NETCAT(...) __VA_ARGS__
#define CFG_CHATTR 1
#define USE_CHATTR(...) __VA_ARGS__
#else
#define CFG_DIFF 0
#define USE_DIFF(...)
#define CFG_TELNET 0
#define USE_TELNET(...)
#define CFG_TRACEROUTE 0
#define USE_TRACEROUTE(...)
#define CFG_AWK 0
#define USE_AWK(...)
#define CFG_WGET 0
#define USE_WGET(...)
#define CFG_WGET_LIBTLS 0
#define USE_WGET_LIBTLS(...)
#define CFG_MKPASSWD 0
#define USE_MKPASSWD(...)
#define CFG_TOYBOX_PRLIMIT 0
#define USE_TOYBOX_PRLIMIT(...)
#define CFG_ULIMIT 0
#define USE_ULIMIT(...)
#define CFG_EXPR 0
#define USE_EXPR(...)
#define CFG_SHA384SUM 0
#define USE_SHA384SUM(...)
#define CFG_SHA512SUM 0
#define USE_SHA512SUM(...)
#define CFG_W 0
#define USE_W(...)
#define CFG_RENICE 0
#define USE_RENICE(...)
#define CFG_INOTIFYD 0
#define USE_INOTIFYD(...)
#define CFG_USLEEP 0
#define USE_USLEEP(...)
#define CFG_SHRED 0
#define USE_SHRED(...)
#define CFG_LSPCI 0
#define USE_LSPCI(...)
#define CFG_LSUSB 0
#define USE_LSUSB(...)
#define CFG_VMSTAT 0
#define USE_VMSTAT(...)
#define CFG_GETCONF 0
#define USE_GETCONF(...)
#define CFG_TR 0
#define USE_TR(...)
#define CFG_SETFATTR 0
#define USE_SETFATTR(...)
#define CFG_GETFATTR 0
#define USE_GETFATTR(...)
#define CFG_INSTALL 0
#define USE_INSTALL(...)
#define CFG_IPCS 0
#define USE_IPCS(...)
#define CFG_NETCAT 0
#define USE_NETCAT(...)
#define CFG_CHATTR 0
#define USE_CHATTR(...)
#endif
#ifdef TOYBOX_ENABLE_BRCTL
#define CFG_BRCTL 1
#define USE_BRCTL(...) __VA_ARGS__
#else
#define CFG_BRCTL 0
#define USE_BRCTL(...)
#endif
#ifdef WITH_SELINUX
#define CFG_SHA256SUM 1
#define USE_SHA256SUM(...) __VA_ARGS__
#define CFG_TOYBOX_LIBCRYPTO 1
#define USE_TOYBOX_LIBCRYPTO(...) __VA_ARGS__
#else
#define CFG_SHA256SUM 0
#define USE_SHA256SUM(...)
#define CFG_TOYBOX_LIBCRYPTO 0
#define USE_TOYBOX_LIBCRYPTO(...)
#endif
#define CFG_TOYBOX_CONTAINER 1
#define USE_TOYBOX_CONTAINER(...) __VA_ARGS__
#define CFG_TOYBOX_FIFREEZE 1
#define USE_TOYBOX_FIFREEZE(...) __VA_ARGS__
#define CFG_TOYBOX_ICONV 1
#define USE_TOYBOX_ICONV(...) __VA_ARGS__
#define CFG_TOYBOX_FALLOCATE 1
#define USE_TOYBOX_FALLOCATE(...) __VA_ARGS__
#define CFG_TOYBOX_UTMPX 1
#define USE_TOYBOX_UTMPX(...) __VA_ARGS__
#define CFG_TOYBOX_SHADOW 1
#define USE_TOYBOX_SHADOW(...) __VA_ARGS__
#define CFG_TOYBOX_ON_ANDROID 0
#define USE_TOYBOX_ON_ANDROID(...)
#define CFG_TOYBOX_ANDROID_SCHEDPOLICY 0
#define USE_TOYBOX_ANDROID_SCHEDPOLICY(...)
#define CFG_TOYBOX_FORK 1
#define USE_TOYBOX_FORK(...) __VA_ARGS__
#define CFG_TOYBOX_GETRANDOM 1
#define USE_TOYBOX_GETRANDOM(...) __VA_ARGS__
#define CFG_BASENAME 1
#define USE_BASENAME(...) __VA_ARGS__
#define CFG_CAL 1
#define USE_CAL(...) __VA_ARGS__
#define CFG_CAT 1
#define USE_CAT(...) __VA_ARGS__
#define CFG_CHGRP 1
#define USE_CHGRP(...) __VA_ARGS__
#define CFG_CHOWN 1
#define USE_CHOWN(...) __VA_ARGS__
#define CFG_CHMOD 1
#define USE_CHMOD(...) __VA_ARGS__
#define CFG_CKSUM 1
#define USE_CKSUM(...) __VA_ARGS__
#define CFG_CRC32 1
#define USE_CRC32(...) __VA_ARGS__
#define CFG_CMP 1
#define USE_CMP(...) __VA_ARGS__
#define CFG_COMM 1
#define USE_COMM(...) __VA_ARGS__
#define CFG_CP 1
#define USE_CP(...) __VA_ARGS__
#define CFG_CP_PRESERVE 1
#define USE_CP_PRESERVE(...) __VA_ARGS__
#define CFG_MV 1
#define USE_MV(...) __VA_ARGS__
#define CFG_CPIO 1
#define USE_CPIO(...) __VA_ARGS__
#define CFG_CUT 1
#define USE_CUT(...) __VA_ARGS__
#define CFG_DATE 1
#define USE_DATE(...) __VA_ARGS__
#define CFG_DF 1
#define USE_DF(...) __VA_ARGS__
#define CFG_DIRNAME 1
#define USE_DIRNAME(...) __VA_ARGS__
#define CFG_DU 1
#define USE_DU(...) __VA_ARGS__
#define CFG_ECHO 1
#define USE_ECHO(...) __VA_ARGS__
#define CFG_ENV 1
#define USE_ENV(...) __VA_ARGS__
#define CFG_EXPAND 1
#define USE_EXPAND(...) __VA_ARGS__
#define CFG_FALSE 1
#define USE_FALSE(...) __VA_ARGS__
#define CFG_FILE 1
#define USE_FILE(...) __VA_ARGS__
#define CFG_FIND 1
#define USE_FIND(...) __VA_ARGS__
#define CFG_GREP 1
#define USE_GREP(...) __VA_ARGS__
#define CFG_EGREP 1
#define USE_EGREP(...) __VA_ARGS__
#define CFG_FGREP 1
#define USE_FGREP(...) __VA_ARGS__
#define CFG_HEAD 1
#define USE_HEAD(...) __VA_ARGS__
#define CFG_ICONV 1
#define USE_ICONV(...) __VA_ARGS__
#define CFG_ID 1
#define USE_ID(...) __VA_ARGS__
#ifdef WITH_SELINUX
# define CFG_ID_Z 1
# define USE_ID_Z(...) __VA_ARGS__
#else
# define CFG_ID_Z 0
# define USE_ID_Z(...)
#endif // WITH_SELINUX
#define CFG_GROUPS 1
#define USE_GROUPS(...) __VA_ARGS__
#define CFG_LOGNAME 1
#define USE_LOGNAME(...) __VA_ARGS__
#define CFG_WHOAMI 1
#define USE_WHOAMI(...) __VA_ARGS__
#define CFG_KILL 1
#define USE_KILL(...) __VA_ARGS__
#define CFG_KILLALL5 0
#define USE_KILLALL5(...)
#define CFG_LINK 1
#define USE_LINK(...) __VA_ARGS__
#define CFG_LN 1
#define USE_LN(...) __VA_ARGS__
#define CFG_LOGGER 0
#define USE_LOGGER(...)
#define CFG_LS 1
#define USE_LS(...) __VA_ARGS__
#define CFG_MKDIR 1
#define USE_MKDIR(...) __VA_ARGS__
#ifdef WITH_SELINUX
# define CFG_MKDIR_Z 1
# define USE_MKDIR_Z(...) __VA_ARGS__
#else
# define CFG_MKDIR_Z 0
# define USE_MKDIR_Z(...)
#endif // WITH_SELINUX
#define CFG_MKFIFO 1
#define USE_MKFIFO(...) __VA_ARGS__
#ifdef WITH_SELINUX
# define CFG_MKFIFO_Z 1
# define USE_MKFIFO_Z(...) __VA_ARGS__
#else
# define CFG_MKFIFO_Z 0
# define USE_MKFIFO_Z(...)
#endif // WITH_SELINUX
#define CFG_NICE 1
#define USE_NICE(...) __VA_ARGS__
#define CFG_NL 1
#define USE_NL(...) __VA_ARGS__
#define CFG_NOHUP 1
#define USE_NOHUP(...) __VA_ARGS__
#define CFG_OD 1
#define USE_OD(...) __VA_ARGS__
#define CFG_PASTE 1
#define USE_PASTE(...) __VA_ARGS__
#define CFG_PATCH 1
#define USE_PATCH(...) __VA_ARGS__
#define CFG_PRINTF 1
#define USE_PRINTF(...) __VA_ARGS__
#define CFG_PS 1
#define USE_PS(...) __VA_ARGS__
#define CFG_TOP 1
#define USE_TOP(...) __VA_ARGS__
#define CFG_IOTOP 1
#define USE_IOTOP(...) __VA_ARGS__
#define CFG_PGREP 1
#define USE_PGREP(...) __VA_ARGS__
#define CFG_PKILL 1
#define USE_PKILL(...) __VA_ARGS__
#define CFG_PWD 1
#define USE_PWD(...) __VA_ARGS__
#define CFG_RM 1
#define USE_RM(...) __VA_ARGS__
#define CFG_RMDIR 1
#define USE_RMDIR(...) __VA_ARGS__
#define CFG_SED 1
#define USE_SED(...) __VA_ARGS__
#define CFG_SLEEP 1
#define USE_SLEEP(...) __VA_ARGS__
#define CFG_SORT 1
#define USE_SORT(...) __VA_ARGS__
#define CFG_SORT_FLOAT 1
#define USE_SORT_FLOAT(...) __VA_ARGS__
#define CFG_SPLIT 1
#define USE_SPLIT(...) __VA_ARGS__
#define CFG_STRINGS 1
#define USE_STRINGS(...) __VA_ARGS__
#define CFG_TAIL 1
#define USE_TAIL(...) __VA_ARGS__
#define CFG_TAR 1
#define USE_TAR(...) __VA_ARGS__
#define CFG_TEE 1
#define USE_TEE(...) __VA_ARGS__
#define CFG_TEST 1
#define USE_TEST(...) __VA_ARGS__
#define CFG_TIME 1
#define USE_TIME(...) __VA_ARGS__
#define CFG_TOUCH 1
#define USE_TOUCH(...) __VA_ARGS__
#define CFG_TRUE 1
#define USE_TRUE(...) __VA_ARGS__
#define CFG_TTY 1
#define USE_TTY(...) __VA_ARGS__
#define CFG_ARCH 0
#define USE_ARCH(...)
#define CFG_UNAME 1
#define USE_UNAME(...) __VA_ARGS__
#define CFG_UNIQ 1
#define USE_UNIQ(...) __VA_ARGS__
#define CFG_UNLINK 1
#define USE_UNLINK(...) __VA_ARGS__
#define CFG_UUDECODE 1
#define USE_UUDECODE(...) __VA_ARGS__
#define CFG_UUENCODE 1
#define USE_UUENCODE(...) __VA_ARGS__
#define CFG_WC 1
#define USE_WC(...) __VA_ARGS__
#define CFG_WHO 1
#define USE_WHO(...) __VA_ARGS__
#define CFG_XARGS 1
#define USE_XARGS(...) __VA_ARGS__
#define CFG_ARP 0
#define USE_ARP(...)
#define CFG_ARPING 0
#define USE_ARPING(...)
#define CFG_BC 0
#define USE_BC(...)
#define CFG_BOOTCHARTD 0
#define USE_BOOTCHARTD(...)
#define CFG_CROND 0
#define USE_CROND(...)
#define CFG_CRONTAB 0
#define USE_CRONTAB(...)
#define CFG_DD 1
#define USE_DD(...) __VA_ARGS__
#define CFG_DHCP6 0
#define USE_DHCP6(...)
#define CFG_DHCP 0
#define USE_DHCP(...)
#define CFG_DHCPD 0
#define USE_DHCPD(...)
#define CFG_DEBUG_DHCP 0
#define USE_DEBUG_DHCP(...)
#define CFG_DUMPLEASES 0
#define USE_DUMPLEASES(...)
#define CFG_FDISK 0
#define USE_FDISK(...)
#define CFG_FOLD 0
#define USE_FOLD(...)
#define CFG_FSCK 0
#define USE_FSCK(...)
#define CFG_GETOPT 0
#define USE_GETOPT(...)
#ifdef WITH_SELINUX
# define CFG_GETTY 0
# define USE_GETTY(...)
#else
# define CFG_GETTY 1
# define USE_GETTY(...) __VA_ARGS__
#endif // WITH_SELINUX
#define CFG_GROUPADD 0
#define USE_GROUPADD(...)
#define CFG_GROUPDEL 0
#define USE_GROUPDEL(...)
#define CFG_HEXDUMP 0
#define USE_HEXDUMP(...)
#define CFG_HD 0
#define USE_HD(...)
#define CFG_HOST 0
#define USE_HOST(...)
#define CFG_INIT 0
#define USE_INIT(...)
#define CFG_IP 0
#define USE_IP(...)
#define CFG_IPCRM 0
#define USE_IPCRM(...)
#define CFG_KLOGD 0
#define USE_KLOGD(...)
#define CFG_KLOGD_SOURCE_RING_BUFFER 0
#define USE_KLOGD_SOURCE_RING_BUFFER(...)
#define CFG_LAST 0
#define USE_LAST(...)
#define CFG_LSOF 1
#define USE_LSOF(...) __VA_ARGS__
#define CFG_MAN 0
#define USE_MAN(...)
#ifdef WITH_SELINUX
# define CFG_MDEV 0
# define USE_MDEV(...)
# define CFG_MDEV_CONF 0
# define USE_MDEV_CONF(...)
#else
# define CFG_MDEV 1
# define USE_MDEV(...) __VA_ARGS__
# define CFG_MDEV_CONF 1
# define USE_MDEV_CONF(...) __VA_ARGS__
#endif // WITH_SELINUX
#define CFG_MKE2FS 0
#define USE_MKE2FS(...)
#define CFG_MKE2FS_JOURNAL 0
#define USE_MKE2FS_JOURNAL(...)
#define CFG_MKE2FS_GEN 0
#define USE_MKE2FS_GEN(...)
#define CFG_MKE2FS_LABEL 0
#define USE_MKE2FS_LABEL(...)
#define CFG_MKE2FS_EXTENDED 0
#define USE_MKE2FS_EXTENDED(...)
#define CFG_MODPROBE 0
#define USE_MODPROBE(...)
#define CFG_MORE 1
#define USE_MORE(...) __VA_ARGS__
#define CFG_OPENVT 0
#define USE_OPENVT(...)
#define CFG_DEALLOCVT 0
#define USE_DEALLOCVT(...)
#ifdef WITH_SELINUX
#ifdef TOYBOX_EXTENDED_CMD
#define CFG_ROUTE 1
#define USE_ROUTE(...) __VA_ARGS__
#else
#define CFG_ROUTE 0
#define USE_ROUTE(...)
#endif
#else
#define CFG_ROUTE 1
#define USE_ROUTE(...) __VA_ARGS__
#endif // WITH_SELINUX
#define CFG_SH 0
#define USE_SH(...)
#define CFG_CD 0
#define USE_CD(...)
#define CFG_EXIT 0
#define USE_EXIT(...)
#define CFG_STRACE 0
#define USE_STRACE(...)
#define CFG_STTY 0
#define USE_STTY(...)
#define CFG_SULOGIN 0
#define USE_SULOGIN(...)
#define CFG_SYSLOGD 0
#define USE_SYSLOGD(...)
#define CFG_TCPSVD 0
#define USE_TCPSVD(...)
#ifdef WITH_SELINUX
# define CFG_TELNETD 0
# define USE_TELNETD(...)
#else
# define CFG_TELNETD 1
# define USE_TELNETD(...) __VA_ARGS__
#endif // WITH_SELINUX
#define CFG_TFTP 0
#define USE_TFTP(...)
#define CFG_TFTPD 0
#define USE_TFTPD(...)
#define CFG_USERADD 0
#define USE_USERADD(...)
#define CFG_USERDEL 0
#define USE_USERDEL(...)
#define CFG_VI 0
#define USE_VI(...)
#define CFG_XZCAT 0
#define USE_XZCAT(...)
#define CFG_ACPI 0
#define USE_ACPI(...)
#define CFG_ASCII 0
#define USE_ASCII(...)
#define CFG_BASE64 1
#define USE_BASE64(...) __VA_ARGS__
#define CFG_BASE32 0
#define USE_BASE32(...)
#define CFG_BLKID 0
#define USE_BLKID(...)
#define CFG_FSTYPE 1
#define USE_FSTYPE(...) __VA_ARGS__
#define CFG_BLOCKDEV 0
#define USE_BLOCKDEV(...)
#define CFG_BUNZIP2 0
#define USE_BUNZIP2(...)
#define CFG_BZCAT 0
#define USE_BZCAT(...)
#ifdef WITH_SELINUX
# define CFG_CHCON 1
# define USE_CHCON(...) __VA_ARGS__
#else
# define CFG_CHCON 0
# define USE_CHCON(...)
#endif // WITH_SELINUX
#define CFG_CHROOT 1
#define USE_CHROOT(...) __VA_ARGS__
#define CFG_CHRT 0
#define USE_CHRT(...)
#define CFG_CHVT 1
#define USE_CHVT(...) __VA_ARGS__
#define CFG_CLEAR 1
#define USE_CLEAR(...) __VA_ARGS__
#define CFG_COUNT 1
#define USE_COUNT(...) __VA_ARGS__
#define CFG_DEVMEM 0
#define USE_DEVMEM(...)
#define CFG_DOS2UNIX 1
#define USE_DOS2UNIX(...) __VA_ARGS__
#define CFG_UNIX2DOS 1
#define USE_UNIX2DOS(...) __VA_ARGS__
#define CFG_EJECT 0
#define USE_EJECT(...)
#define CFG_FACTOR 1
#define USE_FACTOR(...) __VA_ARGS__
#define CFG_FALLOCATE 1
#define USE_FALLOCATE(...) __VA_ARGS__
#define CFG_FLOCK 1
#define USE_FLOCK(...) __VA_ARGS__
#define CFG_FMT 1
#define USE_FMT(...) __VA_ARGS__
#define CFG_FREE 1
#define USE_FREE(...) __VA_ARGS__
#define CFG_FREERAMDISK 1
#define USE_FREERAMDISK(...) __VA_ARGS__
#define CFG_FSFREEZE 0
#define USE_FSFREEZE(...)
#define CFG_FSYNC 1
#define USE_FSYNC(...) __VA_ARGS__
#define CFG_HELP 1
#define USE_HELP(...) __VA_ARGS__
#define CFG_HELP_EXTRAS 1
#define USE_HELP_EXTRAS(...) __VA_ARGS__
#define CFG_HEXEDIT 1
#define USE_HEXEDIT(...) __VA_ARGS__
#define CFG_HWCLOCK 0
#define USE_HWCLOCK(...)
#define CFG_I2CDETECT 0
#define USE_I2CDETECT(...)
#define CFG_I2CDUMP 0
#define USE_I2CDUMP(...)
#define CFG_I2CGET 0
#define USE_I2CGET(...)
#define CFG_I2CSET 0
#define USE_I2CSET(...)
#define CFG_INSMOD 1
#define USE_INSMOD(...) __VA_ARGS__
#define CFG_IONICE 0
#define USE_IONICE(...)
#define CFG_IORENICE 0
#define USE_IORENICE(...)
#define CFG_LOGIN 0
#define USE_LOGIN(...)
#define CFG_LOSETUP 0
#define USE_LOSETUP(...)
#define CFG_LSATTR 1
#define USE_LSATTR(...) __VA_ARGS__
#define CFG_LSMOD 1
#define USE_LSMOD(...) __VA_ARGS__
#define CFG_LSPCI_TEXT 0
#define USE_LSPCI_TEXT(...)
#define CFG_MAKEDEVS 0
#define USE_MAKEDEVS(...)
#define CFG_MCOOKIE 1
#define USE_MCOOKIE(...) __VA_ARGS__
#define CFG_MIX 0
#define USE_MIX(...)
#define CFG_MKSWAP 1
#define USE_MKSWAP(...) __VA_ARGS__
#define CFG_MODINFO 0
#define USE_MODINFO(...)
#define CFG_MOUNTPOINT 1
#define USE_MOUNTPOINT(...) __VA_ARGS__
#define CFG_NBD_CLIENT 0
#define USE_NBD_CLIENT(...)
#define CFG_UNSHARE 0
#define USE_UNSHARE(...)
#define CFG_NSENTER 1
#define USE_NSENTER(...) __VA_ARGS__
#define CFG_ONEIT 0
#define USE_ONEIT(...)
#define CFG_PARTPROBE 0
#define USE_PARTPROBE(...)
#define CFG_PIVOT_ROOT 0
#define USE_PIVOT_ROOT(...)
#define CFG_PMAP 0
#define USE_PMAP(...)
#define CFG_PRINTENV 1
#define USE_PRINTENV(...) __VA_ARGS__
#define CFG_PWDX 1
#define USE_PWDX(...) __VA_ARGS__
#define CFG_PWGEN 0
#define USE_PWGEN(...)
#define CFG_READAHEAD 1
#define USE_READAHEAD(...) __VA_ARGS__
#define CFG_READLINK 1
#define USE_READLINK(...) __VA_ARGS__
#define CFG_REALPATH 1
#define USE_REALPATH(...) __VA_ARGS__
#define CFG_REBOOT 0
#define USE_REBOOT(...)
#define CFG_RESET 1
#define USE_RESET(...) __VA_ARGS__
#define CFG_REV 1
#define USE_REV(...) __VA_ARGS__
#define CFG_RMMOD 1
#define USE_RMMOD(...) __VA_ARGS__
#define CFG_SETSID 1
#define USE_SETSID(...) __VA_ARGS__
#define CFG_SHA3SUM 0
#define USE_SHA3SUM(...)
#define CFG_STAT 1
#define USE_STAT(...) __VA_ARGS__
#define CFG_SWAPOFF 1
#define USE_SWAPOFF(...) __VA_ARGS__
#define CFG_SWAPON 1
#define USE_SWAPON(...) __VA_ARGS__
#define CFG_SWITCH_ROOT 0
#define USE_SWITCH_ROOT(...)
#define CFG_SYSCTL 1
#define USE_SYSCTL(...) __VA_ARGS__
#define CFG_TAC 1
#define USE_TAC(...) __VA_ARGS__
#define CFG_NPROC 1
#define USE_NPROC(...) __VA_ARGS__
#define CFG_TASKSET 1
#define USE_TASKSET(...) __VA_ARGS__
#define CFG_TIMEOUT 1
#define USE_TIMEOUT(...) __VA_ARGS__
#define CFG_TRUNCATE 1
#define USE_TRUNCATE(...) __VA_ARGS__
#define CFG_UPTIME 1
#define USE_UPTIME(...) __VA_ARGS__
#define CFG_UUIDGEN 1
#define USE_UUIDGEN(...) __VA_ARGS__
#define CFG_VCONFIG 0
#define USE_VCONFIG(...)
#define CFG_WATCH 1
#define USE_WATCH(...) __VA_ARGS__
#define CFG_WHICH 1
#define USE_WHICH(...) __VA_ARGS__
#define CFG_XXD 1
#define USE_XXD(...) __VA_ARGS__
#define CFG_YES 1
#define USE_YES(...) __VA_ARGS__
#define CFG_FTPGET 1
#define USE_FTPGET(...) __VA_ARGS__
#define CFG_FTPPUT 1
#define USE_FTPPUT(...) __VA_ARGS__
#define CFG_IFCONFIG 1
#define USE_IFCONFIG(...) __VA_ARGS__
#define CFG_MICROCOM 0
#define USE_MICROCOM(...)
#define CFG_NETCAT_LISTEN 0
#define USE_NETCAT_LISTEN(...)
#define CFG_NETSTAT 1
#define USE_NETSTAT(...) __VA_ARGS__
#define CFG_PING 1
#define USE_PING(...) __VA_ARGS__
#define CFG_RFKILL 0
#define USE_RFKILL(...)
#define CFG_SNTP 0
#define USE_SNTP(...)
#define CFG_TUNCTL 0
#define USE_TUNCTL(...)
#define CFG_DMESG 1
#define USE_DMESG(...) __VA_ARGS__
#define CFG_GZIP 1
#define USE_GZIP(...) __VA_ARGS__
#define CFG_GUNZIP 1
#define USE_GUNZIP(...) __VA_ARGS__
#define CFG_ZCAT 1
#define USE_ZCAT(...) __VA_ARGS__
#define CFG_HOSTNAME 1
#define USE_HOSTNAME(...) __VA_ARGS__
#define CFG_DNSDOMAINNAME 0
#define USE_DNSDOMAINNAME(...)
#define CFG_KILLALL 1
#define USE_KILLALL(...) __VA_ARGS__
#define CFG_MD5SUM 1
#define USE_MD5SUM(...) __VA_ARGS__
#define CFG_SHA1SUM 1
#define USE_SHA1SUM(...) __VA_ARGS__
#define CFG_SHA224SUM 0
#define USE_SHA224SUM(...)
#define CFG_MKNOD 1
#define USE_MKNOD(...) __VA_ARGS__
#ifdef WITH_SELINUX
# define CFG_MKNOD_Z 1
# define USE_MKNOD_Z(...) __VA_ARGS__
#else
# define CFG_MKNOD_Z 0
# define USE_MKNOD_Z(...)
#endif // WITH_SELINUX
#define CFG_MKTEMP 1
#define USE_MKTEMP(...) __VA_ARGS__
#define CFG_MOUNT 1
#define USE_MOUNT(...) __VA_ARGS__
#define CFG_PASSWD 0
#define USE_PASSWD(...)
#define CFG_PASSWD_SAD 0
#define USE_PASSWD_SAD(...)
#define CFG_PIDOF 1
#define USE_PIDOF(...) __VA_ARGS__
#define CFG_SEQ 1
#define USE_SEQ(...) __VA_ARGS__
#define CFG_SU 0
#define USE_SU(...)
#define CFG_SYNC 1
#define USE_SYNC(...) __VA_ARGS__
#define CFG_UMOUNT 1
#define USE_UMOUNT(...) __VA_ARGS__
#define CFG_DEMO_MANY_OPTIONS 0
#define USE_DEMO_MANY_OPTIONS(...)
#define CFG_DEMO_NUMBER 0
#define USE_DEMO_NUMBER(...)
#define CFG_DEMO_SCANKEY 0
#define USE_DEMO_SCANKEY(...)
#define CFG_DEMO_UTF8TOWC 0
#define USE_DEMO_UTF8TOWC(...)
#define CFG_HELLO 0
#define USE_HELLO(...)
#define CFG_HOSTID 0
#define USE_HOSTID(...)
#define CFG_LOGWRAPPER 0
#define USE_LOGWRAPPER(...)
#define CFG_SKELETON 0
#define USE_SKELETON(...)
#define CFG_SKELETON_ALIAS 0
#define USE_SKELETON_ALIAS(...)
#define CFG_GETENFORCE 0
#define USE_GETENFORCE(...)
#define CFG_LOAD_POLICY 0
#define USE_LOAD_POLICY(...)
#define CFG_LOG 0
#define USE_LOG(...)
#define CFG_RESTORECON 0
#define USE_RESTORECON(...)
#define CFG_RUNCON 0
#define USE_RUNCON(...)
#define CFG_SENDEVENT 0
#define USE_SENDEVENT(...)
#define CFG_SETENFORCE 0
#define USE_SETENFORCE(...)
#define CFG_TOYBOX 1
#define USE_TOYBOX(...) __VA_ARGS__
#define CFG_TOYBOX_SUID 1
#define USE_TOYBOX_SUID(...) __VA_ARGS__
#ifdef WITH_SELINUX
# define CFG_TOYBOX_LSM_NONE 0
# define USE_TOYBOX_LSM_NONE(...)
# define CFG_TOYBOX_SELINUX 1
# define USE_TOYBOX_SELINUX(...) __VA_ARGS__
#else
# define CFG_TOYBOX_LSM_NONE 1
# define USE_TOYBOX_LSM_NONE(...) __VA_ARGS__
# define CFG_TOYBOX_SELINUX 0
# define USE_TOYBOX_SELINUX(...)
#endif // WITH_SELINUX
#define CFG_TOYBOX_SMACK 0
#define USE_TOYBOX_SMACK(...)
#define CFG_TOYBOX_LIBZ 1
#define USE_TOYBOX_LIBZ(...) __VA_ARGS__
#define CFG_TOYBOX_FLOAT 1
#define USE_TOYBOX_FLOAT(...) __VA_ARGS__
#define CFG_TOYBOX_HELP 1
#define USE_TOYBOX_HELP(...) __VA_ARGS__
#define CFG_TOYBOX_HELP_DASHDASH 1
#define USE_TOYBOX_HELP_DASHDASH(...) __VA_ARGS__
#define CFG_TOYBOX_I18N 1
#define USE_TOYBOX_I18N(...) __VA_ARGS__
#define CFG_TOYBOX_FREE 0
#define USE_TOYBOX_FREE(...)
#define CFG_TOYBOX_NORECURSE 0
#define USE_TOYBOX_NORECURSE(...)
#define CFG_TOYBOX_DEBUG 0
#define USE_TOYBOX_DEBUG(...)
#define CFG_TOYBOX_PEDANTIC_ARGS 0
#define USE_TOYBOX_PEDANTIC_ARGS(...)
#define CFG_TOYBOX_UID_SYS 100
#define CFG_TOYBOX_UID_USR 500
#define CFG_TOYBOX_MUSL_NOMMU_IS_BROKEN 0
#define USE_TOYBOX_MUSL_NOMMU_IS_BROKEN(...)
#define CFG_TOYBOX_ZHELP 1
#define USE_TOYBOX_ZHELP(...) __VA_ARGS__
