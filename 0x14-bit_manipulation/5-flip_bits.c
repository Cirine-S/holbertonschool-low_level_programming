#include "holberton.h"
/**
 *flip_bits - function
 *@n: int
 *@m: int
 *Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = 0, i = 0;

	flip = n ^ m;
	while (flip)
	{
		i += flip & 1;
		flip >>= 1;
	}
	return (i);
}
