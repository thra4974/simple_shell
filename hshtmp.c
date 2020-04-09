#include "holberton.h"

int main(int ac, char **av)
{
	//READ COMMAND LINE (PRINT $)
	char *arg = readarg();
	// SPLIT READ COMMAND LINE INTO ARRAY OF EACH WORD OF CMD LINE
	tokenize(arg);
	//SOME EXECUTION STUFF (NOT THERE YET).
	return (0);
}
