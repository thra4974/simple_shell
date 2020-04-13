#include "holberton.h"

/**
 * readarg - reads args from cmd line, prints '$' on each line
 * Return: line read
 */

#define _EOF (-1) //personal definition for preferance.

char *readarg(void)
{
	size_t rd = 0;
	char *read = NULL; // What happens if this is uninitialized?

	if (getline(&read, &rd, stdin) == _EOF)
	{
		_puts("See ya!\n"); //exit message test, did I handle EOF?
		exit(1); // Define some exit status.
	}
	return (read);
}
