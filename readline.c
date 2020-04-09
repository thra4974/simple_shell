#include "holberton.h"

/**
 * readarg - reads args from cmd line, prints '$' on each line
 * Return: line read
 */

char *readarg(void)
{
	ssize_t rd = 0;
	char *read = NULL;

	_puts("$ ");
	while ((rd = getline(&read, &rd, stdin)) != -1)
	{
		_puts("$ ");
	}
	free(read);
	return (read);
}
