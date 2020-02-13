#include <stdio.h>
/**
 * main - function
 * Return: 0 (Success)
 */
int main(void)
{
long n = 612852475143, i = 2;
while (i * i < n)
{
while (n % i == 0)
n = n / i;
i++;
}
printf("%ld\n", n);
return (0);
}
