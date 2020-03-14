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
		printf("(nil)");

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
	ch_p lsarg[] = {
                {'c', pr_c},
		{'i', pr_i},
		{'f', pr_fl},
		{'s', pr_str},
	};

	va_start(list, format);
	while (format[i])
	{
		j = 0;
		while (lsarg[j].c)
		{
			if (format[i] == lsarg[j].c)
			{
				(lsarg[j]).f(list);

				if (format[i + 1] == '\0')
				{
				printf("\n");
				break;
				}
				printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(list);
}
