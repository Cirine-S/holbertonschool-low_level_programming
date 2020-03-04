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
	int l1, l2, i, j;

	l1 = 0;
	l2 = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	s = malloc((l1 + l2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (; i < l1 + l2; i++)
	{
		s[i] = s2[j];
		j++;
	}
	return (s);
}
