#include "holberton.h"

/**
 * pid - prints pid ID
 *
 * Return: Always 0
 */

int pid(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}

/**
 * ppid - PPID
 *
 * Return: Always 0
 */

int ppid(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("%u\n", my_ppid);
	return (0);
}
