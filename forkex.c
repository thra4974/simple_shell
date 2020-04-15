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

	if (pid == -1)
	{
		perror("Failed to fork\n");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		if ((execve(argv[0], argv, envp) == -1))
			perror("hsh");
		exit(EXIT_SUCCESS);
	}
	wait(&stat);
}
