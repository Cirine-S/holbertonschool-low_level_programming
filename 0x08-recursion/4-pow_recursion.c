#include "holberton.h"
/**
 *_pow_recursion - function
 *@x : int
 *@y : int
 *Return: int
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
y--;
return (x * _pow_recursion(x, y));
}
