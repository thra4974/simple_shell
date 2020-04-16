#include "holberton.h"

/**
 * exec - fork exec and wait function
 * @argv: pointer to array of strings
 * Return: integers (status);
 */

void exec(char *argv[])
{
	char *envp[] = {"PATH=/bin/", NULL};
	int stat = 0;
	pid_t pid = fork();
	char *CMDNAME = argv[0];

	if (pid < 0)
	{
		perror("hsh");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		if ((execve(CMDNAME, argv, envp) == -1))
		{
			perror("hsh");
		}
		exit(EXIT_SUCCESS);
	}
	wait(&stat);
}
