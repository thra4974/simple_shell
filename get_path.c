#include "holberton.h"

/**
 * path_size - gets size of path
 * @path: pointer to path token
 * Return: integer size of path.
 */

int path_size (char *path)
{
	int i, j;
	i = 0;
	j = 0;
	const char *delim1, delim2;
	delim1 = '=';
	delim2 = ':';

	while (path[i] != '\0')
	{
		if (path[i] == delim1 || path[i] == delim2)
			j++;
		i++;
	}
}

/**
 * get_path: functions gets path
 * @env: double pointer to users environment
 * Return: path as array of strings
 */

char **get_path(char **env)
{
	unsigned int i, j, count;
	int cmp = 0;
	char *tok, *tok2, *path;
	char **full_path;
	const char *del1, del2, cd;
	del1 = "=";
	del2 = ":";
	cd = "./";

	i = 0;
	j = 0;

	while(env[i] != NULL)
	{
		cmp = _strcmp(env[i], "PATH");
		if (cmp == 0)
		{
			*path = _strdup(env[i]);
			count = path_size(path);
			tok1 = strtok(path, del1);
			tok1 = strtok(NULL, del1);
			full_path = malloc(sizeof(char *) * (count + 1));
			if (full_path == NULL)
				return (NULL);
			if (tok[1] == del2)
			{
				full_path[j] = _strdup(cd);
				j++;
				tok2 = strtok(tok1, del2);
				tok2 = strtok(NULL, del2);
			}
			else
				tok2 = strtok(tok1, del2);
			while (j < count)
			{
				full_path[j] = _strdup(tok2);
				j++;
				tok2 = strtok(NULL, del2);
			}
		}
		i++;
	}
	full_path[count] = NULL;
	free(path);
	return (full_path);
}
