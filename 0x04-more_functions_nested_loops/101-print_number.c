#include "holberton.h"
#include <stdio.h>
/**
 * print_number - check the code for Holberton School students.
 *@n: int
 * Return: Null
 */
void print_number(int n)
{
int i, a, x;
if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n >= 10)
{
for (i = 1000000000; i >= 10; i = i / 10)
{
x = n / i;
if (x != 0)
{
_putchar(x + '0');
while (i >= 10)
{
a = ((n % i) / (i / 10));
_putchar(a + '0');
i = i / 10;
}
}
}
}
else
_putchar(n + '0');
}
