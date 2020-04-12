#include "holberton.h"

#define _STAT (1)

/**
 * main - main function for holberton shell
 * Return: Exit on success.
 */

int main(void)
{
	char *read;
	char **arrtok;
/**	int stat; **/
	while (_STAT)
	{
		_puts("tristan$ ");
		/**READ COMMAND LINE (PRINT $)**/
		read = readarg();
		/** SPLIT READ COMMAND LINE INTO ARRAY OF EACH WORD OF CMD LINE**/
		arrtok = tokenize(read);
		/**SOME EXECUTION STUFF (NOT THERE YET).**/
		exec(arrtok);
		free(read);
		free(arrtok);
	}
	exit(1);
}
