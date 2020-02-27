#include "holberton.h"
/**
 * factorial - function
 *@n : int
 * Return: int
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
