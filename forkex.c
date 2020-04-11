#include "holberton.h"

int exec(char *argv[])
{
	char *args[] = {"/bin/ls", "-l", "/usr/", NULL};
	int stat = 0;
	pid_t pid = fork();
	if (pid == -1)
	{
		perror("Failed to fork\n");
		exit (1); //define exit status
	}
	if (pid == 0)
	{
		if ((execve(args[0], args, NULL) == -1))
			perror("hsh");
		exit(1);
	}
	wait(&stat);
	return (0);
}
