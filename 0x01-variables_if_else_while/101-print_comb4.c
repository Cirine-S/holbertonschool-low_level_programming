#include <stdio.h>

/**
 * main - function.
 *
 * Return: Always 0.
*/
int main(void)
{
int i, a, b, c;
for (i = 0; i < 999; i++)
{
a = i / 100;
b = (i / 10) % 10;
c = i % 10;
if (a < b && b < c)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (i < 789)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
