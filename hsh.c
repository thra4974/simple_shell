#include "holberton.h"

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
	/** argc unused, arg counter set in splitread.c */

	char *readline = NULL;
	char **arrtok;
	char *PRGM = argv[0];
	int EXIT_CODE = 0;
	size_t n = 0;
	ssize_t rd = 0;
	int input_c = 0;

	for (;;) /* loop endlessly until exit */
	{
		if (isatty(STDIN_FILENO)) /* print prompt */
			_puts("CodeAsIce$ ");
		rd = getline(&readline, &n, stdin);
		if (rd == _EOF)
		{
			free(readline);
			exit(EXIT_CODE); /*recieve exit status */
		}
		if (readline[input_c] == '\n') /* handling empty inputs */
		{
			continue;
			input_c++;
		}
		arrtok = tokenize(readline); /* split input into array of strings */
		if (arrtok != NULL)
		{
			EXIT_CODE = exec(arrtok, PRGM, readline, env);
			free(arrtok);
		}
	}
	free(readline);
	free(arrtok);
	return (EXIT_SUCCESS);
}
