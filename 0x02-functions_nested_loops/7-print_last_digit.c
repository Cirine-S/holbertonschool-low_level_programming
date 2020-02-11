#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number
 *@n: integer that returns the last digit
 *Return: res
 */
int print_last_digit(int n)
{
int x;
x = n % 10
if (n < 0)
x = x * -1;
_putchar('0' + x);
return (x);
}
