#ifndef _HOLBERTON_
#define _HOLBERTON_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>

int _putchar(char c);
void _puts(char *s);
int _strlen(char *s);
int printarg(int ac, char **av);
int pid();
int ppid();

#endif
