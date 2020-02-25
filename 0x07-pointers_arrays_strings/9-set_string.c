#include "holberton.h"
/**
 * set_string - function
 * @s: pointer to pointer
 * @to: pointer
 *
 * Return: Null
 */
void set_string(char **s, char *to)
{
*s = &to[0];
}
