#include "holberton.h"
/**
 * print_times_table - function
 * @n: int
 */
void print_times_table(int n)
{
int i, j, k;
if (n <= 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
k = i * j;
if (k < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k > 9 && k < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(k / 100 + '0');
_putchar(k / 10 % 10 + '0');
_putchar(k % 10 + '0');
}
}
_putchar('\n');
}
}
}
