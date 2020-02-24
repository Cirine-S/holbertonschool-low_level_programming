#include "holberton.h"
/**
 *_strpbrk - function
 *@s: char
 *@accept: char
 *Return: char
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
return (&s[i]);
j++;
}
}
return (0);
}
