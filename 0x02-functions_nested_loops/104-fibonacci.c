#include <stdio.h>

/**
 * main - prints the first 100 fibonancci numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
long f1 = 1, f2 = 2, i, fib;
for (i = 0; i < 90; i++)
{
printf("%ld, ", f1);
fib = f1 + f2;
f1 = f2;
f2 = fib;
}
printf("%ld\n", f1);
return (0);
}
