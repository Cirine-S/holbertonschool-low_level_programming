#include "holberton.h"
/**
 * puts_half - function
 * @str: char
 */
void puts_half(char *str)
{
int length_of_the_string = 0, i = 0;

while (str[length_of_the_string] != '\0')
{
length_of_the_string++;
}
if (length_of_the_string % 2 == 0)
{
i = length_of_the_string / 2;
while (i < length_of_the_string)
{
_putchar(str[i]);
i++;
}
}
else
{      i = (length_of_the_string / 2) + 1;
while (i < length_of_the_string)
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}
