#include "holberton.h"

#define _STAT (1)

/**
 * main - main function for holberton shell
 * Return: Exit on success.
 */

int main(void)
{
	char *read = NULL;
	char **arrtok = NULL;
	int is_atty = isatty(0);

	while (_STAT)
	{
		if (is_atty)
			_puts("CodeAsIce$ ");
		read = readarg();
		arrtok = tokenize(read);
		if (arrtok != NULL)
		{
			exec(arrtok);
			free(read);
			free(arrtok);
		}
	}
	return (0);
}
