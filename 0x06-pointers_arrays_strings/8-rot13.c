#include "holberton.h"
/**
 * rot13 - function
 * @a: pointer char
 * Return: char
 */
char *rot13(char *a)
{
int i = 0;
int j;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (a[i] != '\0')
{
for (j = 0; c[j] != '\0'; j++)
{
if (a[i] == c[j])
{
a[i] = r[j];
break;
}
}
i++;
}
return (a);
}
