#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *pr_c - function
 *@list: list
 */
void pr_c(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 *pr_i - function
 *@list: list
 */
void pr_i(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 *pr_fl - function
 *@list: list
 */
void pr_fl(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 *pr_str - function
 *@list: list
 */
void pr_str(va_list list)
{
	char *s = va_arg(list, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 *print_all - function
 *@format: char
 *Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list list;
	char *separator = "";
	ch_p lsarg[] = {
		{'c', pr_c},
		{'i', pr_i},
		{'f', pr_fl},
		{'s', pr_str},
		{'\0', NULL},
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == lsarg[j].c)
			{
				printf("%s", separator);
				(lsarg[j]).f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
