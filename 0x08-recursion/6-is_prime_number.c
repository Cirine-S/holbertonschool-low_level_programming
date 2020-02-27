#include "holberton.h"
/**
 *_prime - function
 *@i: int
 *@n: int
 *Return: int
 */
int _prime(int i, int n)
{
	if (!(n % i))
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (_prime(i + 1, n));
}


/**
 *is_prime_number - function
 *@n : int
 *Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
else
return (_prime(2, n));
}
