#include "holberton.h"

char **tokenize(char *read)
{
	char *delim = " "; //sep read by spaces
	int len = 0;
	int i = 0;
	int bufsize = 0;
	while (read[len])
		len++;
	bufsize = len;
	char **arrtok = malloc(bufsize * sizeof(char*)); //malloc size of read input.
	if (arrtok == NULL)
	{
		free(arrtok);
		return(0);
	}
	char *tok = strtok(read, delim);
	while(tok != NULL && i < bufsize)
	{
		arrtok[i] = tok;
		i++;
		tok = strtok(NULL, delim);
	}
	arrtok[i] = NULL;
//	free(arrtok);
	return (arrtok);
}
