#include "holberton.h"
/**
 *_atoi - function
 *@s: char
 *Return: 0
 */
int _atoi(char *s)
{
	unsigned int i = 0, j = 0, n = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			j++;
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			n = n * 10 + (s[i] - '0');
		if (s[i] < '0' || s[i] > '9')
			break;
		i++;
	}

	if (j % 2 != 0)
		n = n * -1;

	return (n);
}
