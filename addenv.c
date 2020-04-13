#include "holberton.h"

extern char **environ;

int main(int ac, char **argv, char **env)
{
	printf(" Address of environ: %p\n", &environ);
	printf(" Address of env: %p\n", &env);
	return (0);
}
