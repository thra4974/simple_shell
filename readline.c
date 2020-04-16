#include "holberton.h"

/**
 * readarg - reads args from cmd line, prints '$' on each line
 * Return: line read
 */

#define _EOF (-1)

char *readarg(int EXIT_CODE)
{
	size_t rd = 0;
	char *readline = NULL;

	if (getline(&readline, &rd, stdin) == _EOF)
	{
		free(readline);
		exit(EXIT_CODE);
	}
	return (readline);
}
