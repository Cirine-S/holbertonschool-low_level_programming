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
		return ("null");
	for (len = 0; str[len] != '\0'; len++)
		;
	s = malloc(len + 1);
	if (s == NULL)
		return ("null");
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
