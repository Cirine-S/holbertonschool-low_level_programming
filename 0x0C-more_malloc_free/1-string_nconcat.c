#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function
 *@s1: char
 *@s2: char
 *@n: int
 *Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	s = malloc(l1 + n + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[l1 + i] = s2[i];
	s[l1 + i] = '\0';
	return (s);
}
