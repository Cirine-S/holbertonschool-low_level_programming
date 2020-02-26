#include "holberton.h"
/**
 * _strstr - function
 * @haystack: char
 * @needle: char
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
int i, j = 0;
if (!haystack || !needle)
return (0);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
{
while (needle[j] != '\0' && needle[j] == haystack[i + j])
j++;
}
if (needle[j - 1] == haystack[i + j - 1])
return (&needle[0]);
}
return (0);
}
