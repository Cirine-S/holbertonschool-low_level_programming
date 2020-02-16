#include <stdio.h>
/**
 * main - function
 * Return: 0 (Success)
 */
int main(void)
{
int fib, f1 = 1, f2 = 2, sum = 0;
while (f2 < 4000000)
{
if (f2 % 2 == 0)
sum = sum + f2;
fib = f1 + f2;
f1 = f2;
f2 = fib;
}
printf("%d", sum);
printf("\n");
return (0);
}
