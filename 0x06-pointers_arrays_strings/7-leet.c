#include "holberton.h"
/**
 * leet -  function
 * @a: pointer char
 * Return: char
 */

char *leet(char *a)
{
int  i, j;
char l[] = "oOlLeEaAtT";
char n[] = "0011334477";
while (a[i] != '\0')
{
for (j = 0; l[j] != '\0'; j++)
{
if (a[i] == l[j])
a[i] = n[j];
}
i++;
}
return (a);
}
