#include "holberton.h"

#define _STAT (1)
#define _EOF (-1)

/**
 * main - main function for holberton shell
 * @argc: unused parameter
 * @argv: double pointer to argument vector
 * @env: dbl pointer to environment vector
 * Return: Exit on success.
 */

int main(__attribute__((unused)) int argc, char **argv, char **env)
{
	char *readline = NULL;
	char **arrtok;
	char *PRGM = argv[0];
	int is_atty = isatty(0);
	int EXIT_CODE;
	size_t n = 0;
	ssize_t rd = 0;

	while (_STAT)
	{
		if (is_atty)
			_puts("CodeAsIce$ ");
		rd = getline(&readline, &n, stdin);
		if (rd == _EOF)
		{
			exit(EXIT_CODE);
		}
		arrtok = tokenize(readline);
		if (arrtok != NULL)
		{
			EXIT_CODE = exec(arrtok, PRGM, readline, env);
			free(readline);
			free(arrtok);
		}
	}
	return (0);
}
