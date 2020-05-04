#include "holberton.h"
/**
 *_islower- function
 *@c: integer
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
