#include "holberton.h"
/**
 * _strlen - length of a string
 * @s: caracter
 * Return: int
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
