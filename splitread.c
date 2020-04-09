#include "holberton.h"

char **tokenize(char *readarg)
{
	char *delim = " ";
	int i = 0;
	char *tok = strtok(readarg, delim);
	int bufsize = _strlen(readarg);
	char **arrtok = malloc(sizeof(bufsize));

	if (arrtok == NULL)
	{
		free(arrtok);
		return(0);
	}
	while(tok != NULL)
	{
		arrtok[i] = tok;
		i++;
		tok = strtok(NULL, delim);
	}
	arrtok[i] = NULL;
	free(arrtok);
	return (arrtok);
}
