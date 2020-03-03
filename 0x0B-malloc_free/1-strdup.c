#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup _ function
 *@str: char
 *Return: string
 */
char *_strdup(char *str)
{
	char *s;
	int len = strlen(str);

	if (str == NULL)
		return ("null");
	s = malloc(len);
	if (s == NULL)
		return ("null");
	strcpy(str, s);
	return (s);
}
