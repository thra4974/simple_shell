#include "holberton.h"

/**
 * readarg - reads args from cmd line, prints '$' on each line
 * Return: line read
 */

#define _EOF (-1)

char *readarg(void)
{
	size_t rd = 0;
	char *read = NULL;

	if (getline(&read, &rd, stdin) == _EOF)
	{
		free(read);
		_putchar('\n');
		exit(0);
	}
	return (read);
}
