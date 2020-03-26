#include <stdio.h>
#include "holberton.h"

/**
 *set_bit - function
 *@n: int
 *@index: int
 *Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = (*n | (1 << index));
	return (1);

}
