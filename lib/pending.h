// pending.h - header for pending.c

// password.c
#define MAX_SALT_LEN  20 //3 for id, 16 for key, 1 for '\0'
int read_password(char *buff, int buflen, char *mesg);
int update_password(char *filename, char *username, char *encrypted, int pos);

// lib.c
// This should be switched to posix-2008 getline()
char *get_line(int fd);


// TODO this goes away when lib/password.c cleaned up