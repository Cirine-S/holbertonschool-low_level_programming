#include "holberton.h"
/**
 *_strchr - function
 *@s: char
 *@c: char
 *Return: char
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0' &&  s[i] != c)
i++;
if (s[i] == '\0')
	return (0);
else
{
return (&s[i]);
}
}
