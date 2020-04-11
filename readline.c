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
		_puts("See ya!\n");
		exit(1);
	}
//	free(read);
	return (read);
}
