#include "holberton.h"
/**
 *_isalpha- isalpha
 *@c: integer
 *Return: 1 if c = alpha
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);
else
return (0);
}
