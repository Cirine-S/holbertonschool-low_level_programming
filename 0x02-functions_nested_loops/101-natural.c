#include <stdio.h>
/**
 * main - function
 * Return: 0 (success)
 */
int main(void)
{
int i, sum = 0;
for (i = 3; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
sum = sum + i;
}
printf("%d\n", sum);
return (0);
}
