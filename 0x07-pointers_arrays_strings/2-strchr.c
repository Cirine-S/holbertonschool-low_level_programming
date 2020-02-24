#include "holberton.h"
#include <stdio.h>
/**
 *_strchr - function
 *@s: char
 *@c: char
 *Return: char
 */

char *_strchr(char *s, char c)
{
int i = 0;
char *p;
if (s == NULL)
return (NULL);
while (s[i] != '\0' &&  s[i] != c)
i++;
if (s[i] == '\0')
return (NULL);
else
{
p = s + i;
return (p);
}
}
