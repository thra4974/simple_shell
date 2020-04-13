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

int _putchar(char c);
void _puts(char *s);
int _strlen(char *s);
int _strcmp(char *str1, char *str2);
char *_strdup(char *src);
int pid(void);
int ppid(void);
char *readarg(void);
char **tokenize(char *readarg);
int exec(char **argv);
ssize_t _getline(char *read, ssize_t rd, int fd);

#endif
