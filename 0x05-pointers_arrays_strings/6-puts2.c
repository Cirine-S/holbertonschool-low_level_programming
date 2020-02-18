#include "holberton.h"
/**
 * puts2 - function
 * @str: char
 */
void puts2(char *str)
{
int i = 0;
do
{
_putchar(str[i]);
i +=2 ;
}
while ((str[i] != '\0') && (str[i - 1] != '\0'));
_putchar('\n');
}
