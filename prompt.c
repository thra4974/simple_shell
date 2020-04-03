#include "holberton.h"

/**
 * main - prints "$" waits for user to enter cmd, prints on nextline
 *
 * Return: number of characters read
 *
 */

int main(void)
{
	char *buf;
	ssize_t ch = 0;

	_puts("$ ");
	while ((ch = getline(&buf, &ch, stdin)) != -1)
	{
		_puts(buf);
		_puts("$ ");
	}
	free(buf);
	return (ch);
}
