#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - function
 *@ac: int
 *@av: char
 *Return: int
 */
int main(int ac, char **av)
{
	int num1 = 0, num2 = 0, mul;

	if (ac != 3)
	{
		puts("Error");
		exit(98);
	}
	else
	{
	num1 = atoi(av[1]);
	num2 = atoi(av[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
}
