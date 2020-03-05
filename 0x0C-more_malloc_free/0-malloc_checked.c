#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - function
 *@b: int
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
