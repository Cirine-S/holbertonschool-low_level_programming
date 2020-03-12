#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 *@argc: int
 *@argv: char
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		puts("Error");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
