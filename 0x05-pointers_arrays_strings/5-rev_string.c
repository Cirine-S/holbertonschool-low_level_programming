#include "holberton.h"
/**
 *rev_string - function
 *@s: int
 */
void rev_string(char *s)
{
int j, i = 0;
char permut;

while (s[i] != '\0')
{
i++;
}
for (j = 0; j <= (i - 1) / 2; j++)
{
permut = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = permut;
}
}
