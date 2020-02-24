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
char *p;
while (s[i] != '\0' &&  s[i] != c)
i++;
p = &(s[i]);
return (p);
}
