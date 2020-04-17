#include "holberton.h"

/**
 * path_len - gets the length of a path
 * @path: pointer to path
 * Return: length of path
 */

int path_len(char *path)
{
	int i, count;

	count = 0;
	while (path[i] != '\0')
	{
		if (path[i] == '=' || path[i] == ':')
			count++;
		i++;
	}
	return (count);
}