#include "holberton.h"
/**
 * get_endianness - function
 * Return: void
 */
int get_endianness(void)
{
	int n = 1;
	char *s = (char *)&n;

	return ((int) *s);
}
