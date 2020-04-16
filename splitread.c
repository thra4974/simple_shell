#include "holberton.h"

#define DELM "\n\t "

/**
 * tokenize - splits getline result into vector of strings
 * @read: resulting string form getline
 * Return: array of strings
 */

char **tokenize(char *read)
{
	int len = 0;
	int i = 0;
	int bufsize = 64;

	while (read[len] != '\0')
		len++;
	bufsize = len;
	char **arrtok = malloc(bufsize * sizeof(char *));

	if (arrtok == NULL)
	{
		free(arrtok);
		_puts("no file to be found");
		exit(127);
	}
	char *tok = strtok(read, DELM);

	while (tok != NULL && i < bufsize)
	{
		arrtok[i] = tok;
		i++;
		tok = strtok(NULL, DELM);
	}
	arrtok[i] = NULL;
	return (arrtok);
}
