#include "holberton.h"

#define _STAT (1)

/**
 * main - main function for holberton shell
 * Return: Exit on success.
 */

int main(int ac, char **argv)
{
	char *read;
	char **arrtok;

	while (_STAT)
	{
		_puts("tristan$ ");
		/**READ COMMAND LINE (PRINT $)**/
		read = readarg();
		/** SPLIT READ COMMAND LINE INTO ARRAY OF EACH WORD OF CMD LINE**/
		arrtok = tokenize(read);
		/** execve resulting vector of strings **/
		exec(arrtok);
		free(read);
		free(arrtok); 
	}
	free(read);
	free(arrtok);
	exit(1);
}
