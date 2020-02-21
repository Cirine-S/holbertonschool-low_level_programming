#include "holberton.h"
/**
 * leet -  function
 * @a: pointer char
 * Return: char
 */

char *leet(char *a)
{
int  i, j;
char c[] = "aAeEoOtTlL";
char r[] = "4433007711";
while (a[i] != '\0')
{
for (j = 0; c[j] != '\0'; j++)
{
if (a[i] == c[j])
a[i] = r[j];
}
i++;
}
return (a);
}
