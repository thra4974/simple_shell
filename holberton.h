#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

extern int errno;
int _putchar(char c);
void _puts(char *s);
int _strlen(char *s);
int _strcmp(char *str1, char *str2);
char *_strdup(char *src);
char *_strcat(char *dest, char *src);
int pid(void);
int ppid(void);
char *readarg(void);
char **tokenize(char *readline);
void exec(char **arrtok, char *PRGM, char *readline);
void *cmd_err(char *NAME);
void exe_err(char *command);
void *perm_denied(char *NAME);
int path_size(char *path);
char **get_path(char **env);
ssize_t _getline(char *read, ssize_t rd, int fd);

#endif
