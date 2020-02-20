#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reversing function.
 * @a: pointer of integers
 * @n: pointer of integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, j, m;

if (n % 2 != 0)
m = n + 1;
else
m = n;
for (i = 0; i < m / 2; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
