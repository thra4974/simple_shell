#include "holberton.h"

/**
 * test - test function for holb shell
 * Return: 0 Always
 */

int test(void)
{
	printf("The shell caught the executable!\n");
	printf("Current Pid is: %d\n", getpid());
	return (0);
}
