#include "variadic_functions.h"

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: const unsigned int whish is the positif number of arguments
 *Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ls;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start(ls, n);
	for (x = 0; x < n; x++)
	{
		sum = va_arg(ls, int) + sum;
	}
	va_end(ls);
	return (sum);
}
