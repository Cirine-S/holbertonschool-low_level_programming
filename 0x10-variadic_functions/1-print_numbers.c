#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - function
 *@separator: char
 *@n: int
 *Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(list, int));
	if (separator)
		printf("%s", separator);
	}
	printf("%d\n", va_arg(list, int));

	va_end(list);
}
