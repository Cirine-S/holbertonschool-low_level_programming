#include "holberton.h"
/**
 * _strlen_recursion - function
 * @s: char
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 *pal - function
 *@i: int
 *@s: char
 *@len: int
 *Return: int
 */
int pal(int i, int len, char *s)
{
	if (i > len / 2)
		return (1);
	else if (s[i] != s[len - i -1])
		return (0);
	else
		return (pal(i + 1, len, s));
}

/**
 *is_palindrome - function
 *@s: char
 *Return: int
 */
int is_palindrome(char *s)
{
	int len = 0;
	if (*s == '\0')
		return (1);
		len = _strlen_recursion(s);
		return (pal(0, len, s));
}
