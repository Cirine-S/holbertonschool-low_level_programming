#include "holberton.h"
/**
 * _islower- function
 *@c: integer
 *Return: 0
 */
int _islower(int c)
{
char ch;
if (ch >= 'a' && ch < 'z')
return (1);
else
return (0);
}
