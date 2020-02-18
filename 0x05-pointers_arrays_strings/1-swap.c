#include "holberton.h"
/**
 * swap_int - function
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	 int c;
	 c = *a;
	 *a = *b;
	 *b = c;
}
