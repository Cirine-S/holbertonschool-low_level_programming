#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "holberton.h"
/**
 *binary_to_uint - function
 *@b: char
 *Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, power = 1, conv = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
			conv += power;
		i--;
		power *= 2;
	}

	return (conv);
}
