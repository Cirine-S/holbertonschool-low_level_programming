#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - function
 *@str: char
 *Return: string
 */
char *_strdup(char *str)
{
	char *s;

	s = malloc(strlen(str));
	if (str == NULL || s == NULL)
		return ("null");
	strcpy(s, str);
	return (s);
}
