#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - function
 *@n: int
 *Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s = 0;
	va_list ls;

	if (n == 0)
		return (0);

	va_start(ls, n);

	for (i = 0; i < n; i++)
		s += va_arg(ls, int);

	va_end(ls);
	return (s);
}
