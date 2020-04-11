#include "holberton.h"

char **tokenize(char *read)
{
	char *delim = " ";
	int len = 0;
	int i = 0;
	int bufsize = 0;
	while (read[len] != '\0')
		len++;
	bufsize = len;
	char **arrtok = malloc(bufsize * sizeof(char*) + 1);
//	if (arrtok == NULL)
//	{
//		free(arrtok);
//		return(0);
//	}
	char *tok = strtok(read, delim);
	while(tok != NULL)
	{
		arrtok[i] = tok;
		i++;
		tok = strtok(NULL, delim);
	}
	arrtok[i] = NULL;
//	free(arrtok);
	return (arrtok);
}
