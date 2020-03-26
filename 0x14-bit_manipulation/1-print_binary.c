#include "holberton.h"
/**
 *print_binary - function
 *@n: int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	while (n)
	{
		_putchar((n & 1) + '0');
		n = (n >> 1);
	}
}
