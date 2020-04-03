#include "holberton.h"

int main(char *s)
{
	int i;
	int len;
	const char *delim = " ";
	char *token;

	token = strtok(s, delim);
	while(token != NULL)
	{
		_puts(s);
		_putchar('\n');
		token = strtok(NULL, delim);
	}
	i++;
	return(0);
}
