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

	for (len = 0; str[len] != '\0'; len++)
		;
	s = malloc(len);
	if (str == NULL || s == NULL)
		return ("null");
	for (i = 0; i < len; i++)
		s[i] = str[i];
	return (s);
}
