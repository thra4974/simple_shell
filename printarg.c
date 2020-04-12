#include "holberton.h"

/**
 * printarg - test function to print args in holb shell
 * @ac: number of arguments
 * @av: double pointer to vector of arguments
 * Return: 0
 */

int printarg(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
