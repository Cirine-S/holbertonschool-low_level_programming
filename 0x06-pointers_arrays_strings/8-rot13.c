#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - function
 * @a: pointer char
 * Return: return char
 */
char *rot13(char *a)
{
int i, j, f;
char d[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char m[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
for (i = 0; d[i] != '\0'; i++)
{
for (j = 0; m[j] != '\0' && f == 0; j++)
{
if (d[i] == m[j])
{
d[i] = m[j];
f = 1;
}
}
f = 0;
}
return (a);
}
