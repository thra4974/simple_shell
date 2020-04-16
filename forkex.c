#include "holberton.h"

/**
 * exec - fork exec and wait function
 * @arrtok: pointer array of tokens.
 * @PRGM: pointer to shell name
 * @readline: pointer to user input
 * @env: dbl ptr to environment vector
 * Return: integers (status);
 */

void exec(char **arrtok, char *PRGM, char *readline, char **env)
{
	int stat = 0;
	pid_t pid = fork();
	char *cmd = arrtok[0];

	if (pid < 0)
	{
		perror(PRGM);
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if ((execve(cmd, arrtok, env) == -1))
		{
			exe_err(cmd);
			free(arrtok);
			free(readline);
		}
		exit(EXIT_SUCCESS);
	}
	wait(&stat);
}
