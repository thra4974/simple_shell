#include "holberton.h"

int exec(char *argv[])
{
	char *args[] = {"/bin/sh", NULL};
	char *envp[] =
	{
		"PATH=/bin:/usr/bin",
		NULL
	};

	int stat = 0;
	pid_t pid = fork();
	if (pid == -1)
	{
		perror("Failed to fork\n");
		exit (1); //define exit status
	}
	if (pid == 0)
	{
		if ((execve(args[0], args, envp) == -1))
			perror("hsh");
		exit(1);
	}
	wait(&stat);
	return (0);
}
