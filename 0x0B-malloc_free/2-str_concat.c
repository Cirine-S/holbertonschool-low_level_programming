#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **str_concat -  function
 *@s1: char
 *@s2: char
 *
 *Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2, i, j;

	len1 = 0;
	len2 = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (; i < len1 + len2; i++)
	{
		s[i] = s2[j];
		j++;
	}
	return (s);
}
