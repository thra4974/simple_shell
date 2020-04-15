#include "holberton.h"

#define _STAT (1)

/**
 * main - main function for holberton shell
 * @argv: argument vector
 * Return: Exit on success.
 */

int main(void)
{
	char *read;
	char **arrtok;

	while (_STAT)
	{
		_puts("$coder ");
		read = readarg();
		arrtok = tokenize(read);
		exec(arrtok);
		free(read);
		free(arrtok);
	}
	exit(0);
}
