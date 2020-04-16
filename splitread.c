#include "holberton.h"

#define DELM " \n\t\v\r\a"

/**
 * tokenize - splits getline result into vector of strings
 * @readline: resulting string form getline
 * Return: array of strings
 */

char **tokenize(char *readline)
{
	int len = 0;
	int i = 0;
	int bufsize = 0;

	while (readline[len] != '\0')
		len++;
	bufsize = len;
	char **arrtok = malloc((bufsize + 1) * sizeof(char *));

	if (arrtok == NULL)
	{
		free(arrtok);
		_puts("no file to be found");
	}
	char *tok = strtok(readline, DELM);

	while (tok != NULL && i < bufsize)
	{
		arrtok[i] = tok;
		i++;
		tok = strtok(NULL, DELM);
	}
	arrtok[i] = NULL;
	return (arrtok);
}
