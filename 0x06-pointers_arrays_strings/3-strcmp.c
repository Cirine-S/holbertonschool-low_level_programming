#include "holberton.h"

/**
 *_strcmp - function comparison of strings
 *@s1:  int pointer
 *@s2:  int pointer
 *Return: integer
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
j = 0;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
j = s1[i] - s2[i];
}
return (j);
}
