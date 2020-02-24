#include "holberton.h"
/**
 * _strstr - function
 * @haystack: char
 * @needle: char
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
int i;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == needle[0])
return (&needle[0]);
}
return (0);
}
