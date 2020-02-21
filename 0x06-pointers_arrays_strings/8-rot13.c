#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - function
 * @a: pointer char
 * Return: char
 */
char *rot13(char *a)
{
int i, j, f;
char a[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char r[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; r[j] != '\0' && f == 0; j++)
{
if (a[i] == d[j])
{
a[i] = d[j];
f = 1;
}
}
f = 0;
}
return (a);
}
