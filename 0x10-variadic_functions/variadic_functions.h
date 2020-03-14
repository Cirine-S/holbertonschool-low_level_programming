#ifndef variadic
#define variadic
#include <stdarg.h>
/**
 * struct ch - Struct
 *
 * @c: c
 * @f: The function associated
 */
struct ch
{
	char c;
	void (*f)(va_list);
};
typedef struct ch ch_p;

void pr_c(va_list list);
void pr_i(va_list list);
void pr_fl(va_list list);
void pr_str(va_list list);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
