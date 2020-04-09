#include "holberton.h"

char **tokenize(char *readarg)
{
 	int len = _strlen(readarg);
	char *delim = " ";
	char *tok = strtok(readarg, delim);

	while(tok != NULL)
	{
		tok = strtok(NULL, delim);
	}
	return (tok);
}
