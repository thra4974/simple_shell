#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: 1 on success, -1 on error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints string
 * @s: pointer to string
 * Return: nothing.
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * _strlen - returns length of string
 * @s: pointer to string
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * printarg - print args
 * @ac: count of args
 * @av: double pointer to array
 * Return: 0
 */

int printarg(int ac, char **av)
{
	int i;

	while (av[i] != NULL)
	{
		_puts(av[i]);
		i++;
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
