#include "holberton.h"
/**
 * _strstr - function
 * @haystack: char
 * @needle: char
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
while (needle[j] != '\0' && needle[j] == haystack[i+j])
j++;
}
if (needle[j] == '\0')
return (&needle[0]);
}
return (0);
}
