#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: integer that returns the last digit
 *Return: res
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;
n = n % 10;
_putchar('0' + n);
return (n);
}
