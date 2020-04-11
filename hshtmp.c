#include "holberton.h"

#define _STAT (3)

int main(void)
{

	char *read;
	char **arrtok;
	while(_STAT)
	{
		_puts("$ ");
	//READ COMMAND LINE (PRINT $)
		read = readarg();
	// SPLIT READ COMMAND LINE INTO ARRAY OF EACH WORD OF CMD LINE
		arrtok = tokenize(read);
	//SOME EXECUTION STUFF (NOT THERE YET).
		exec(arrtok);

		free(read);
		free(arrtok);
	}
	return (0);
}
