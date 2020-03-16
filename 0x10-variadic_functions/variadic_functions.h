#ifndef variadic
#define variadic
#include <stdarg.h>
/**
 * struct ch - Struct
 *
 * @c: c
 * @f: The function associated
 */
typedef struct ch
{
	char c;
	void (*f)(va_list);
} ch_p;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
