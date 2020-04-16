#include "holberton.h"

/**
 * exec - fork exec and wait function
 * @arrtok: pointer array of tokens.
 * @PRGM: pointer to shell name
 * @readline: pointer to user input
 * @env: dbl ptr to environment vector
 * Return: integers (status);
 */

int exec(char **arrtok, char *PRGM, char *readline, char **env)
{
	pid_t pid = fork();
	char *cmd = arrtok[0];
	int status = 0;
	int EXIT_CODE = 0;

	if (pid < 0)
	{
		perror(PRGM);
		_exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		if ((execve(cmd, arrtok, env) == -1))
		{
			exe_err(cmd);
			free(arrtok);
			free(readline);
			EXIT_CODE = 126;
			_exit(EXIT_CODE);
		}
		_exit(EXIT_SUCCESS);
	}
	waitpid(pid, &status, WEXITSTATUS(status));
	EXIT_CODE = WEXITSTATUS(status);
	return (EXIT_CODE);
}
