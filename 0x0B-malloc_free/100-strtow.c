#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *strtow - function
 *@str: char
 *Return: char
 */
char **strtow(char *str)
{
	int i, j, w, h = 0;
	char **s;

	if (str == NULL || str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			h++;
	}
	s = malloc((h + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (j = 0; j < h; j++)
	{
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		w++;

		if (str[i - 1] != ' ' && str[i] == ' ')
		{
			s[j] = malloc(w);

			if (s[j] == NULL)
			{
				for (w = 0; w < i; w++)
					free(s[w]);
				free(s);
				return (NULL);
			}
		     w = 0;
		}
	}
	}
	return (s);
}
