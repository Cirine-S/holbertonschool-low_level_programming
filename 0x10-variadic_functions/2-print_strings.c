#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - function
*@separator: char
*@n: int
*Return: int
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char * s;

	va_start(list, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(list, char *);
		if (!s)
			printf("(nil)");
		printf("%s%s", s, separator);
	}

	printf("%s\n", va_arg(list, char *));
	va_end(list);
}
