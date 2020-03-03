#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - function
 *@size: int
 *@c: char
 *Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size * sizeof(char));
	if (size == 0)
		return (0);
	else if (a == NULL)
		return ("null");
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
