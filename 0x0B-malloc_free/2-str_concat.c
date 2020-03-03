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
	char *a;
	int i = 0, j = 0, k, l;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	a = malloc(i + j + 1);
	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	b = 0;
	for (; k < i + j; k++)
	{
		a[k] = s2[l];
		l++;
	}
	return (a);
}
