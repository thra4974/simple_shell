#include "holberton.h"

/**
 * cmd_err - function prints error if command not found
 * @NAME: pointer to name of caller
 * Return: 0
 */

void *cmd_err(char *NAME)
{
	write(STDERR_FILENO, NAME, _strlen(NAME));
	write(STDERR_FILENO, ": ", 2);
/**	print_num(errorcount); **/
	write(STDERR_FILENO, ": ", 2);
/**	write(STDERR_FILENO, cmd, _strlen(cmd)); **/
	write(STDERR_FILENO, ": not found\n", 13);
	return (0);
}

/**
 * exe_err - returns error if command cant be executed
 * @command: pointer to command
 */

void exe_err(char *command)
{
	perror(command);
}
