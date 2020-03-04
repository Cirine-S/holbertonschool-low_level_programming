#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - function
 *@ac: int
 *@av: char
 *Return: char
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			size += 2;
	size++;
	s = malloc(size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
