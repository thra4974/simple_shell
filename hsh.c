#include "holberton.h"

#define _STAT (1)

/**
 * main - main function for holberton shell
 * @ac: count of args
 * @argv: argument vector
 * @env: pointer to environment parameter
 * Return: Exit on success.
 */

int main(int ac, char **argv, char **env)
{
	char *read;
	char **arrtok;

	while (1)
	{
		_puts("$coder ");
		read = readarg();
		arrtok = tokenize(read);
		exec(arrtok);
		if (argv[0] == NULL)
			return (0);
		free(read);
		free(arrtok);
	}
	exit(0);
}
