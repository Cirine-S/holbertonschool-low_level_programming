#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct ch - struct
 *@c: char
 *@f: function associated
 */
typedef struct ch
{
	char c;
	void (*f)(va_list);
}ch_f;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
