#include "holberton.h"
/**
 *_isalpha- isalpha
 *@c: integer
 *Return: 1 if c = alpha
 */
int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
