#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function
 *@str: char
 *Return: string
 */
char *_strdup(char *str)
{
	char *s;
	int len, i;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
