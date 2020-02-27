#include "holberton.h"
/**
 * sqrt- function
 * @i: int
 * @n: int
 * Return: int
 */
int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(i + 1, n));
}


/**
 * _sqrt_recursion - function
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
return (_sqrt(1, n));
}
