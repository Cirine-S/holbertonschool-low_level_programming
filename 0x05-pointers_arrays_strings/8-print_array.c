#include <stdio.h>
/**
 *print_array - function
 *@n: int
 *@a: int
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == n - 1)
printf("%d\n", a[i]);
else
printf("%d, ", a[i]);
}
}
