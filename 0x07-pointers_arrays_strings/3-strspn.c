#include "holberton.h"
/**
 *_strspn - function
 *@s: char
 *@accept: char
 *Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j = 0, k = 0, f = 0;
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
f = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
k++;
f++;
}
j++;
}
if (f == 0)
break;
}
return (k);
}
