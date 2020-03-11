#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, res;
	int (*op)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-'  && *argv[2] != '*'  && *argv[2] != '/'  && *argv[2] != '%')
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
	num2 = atoi(argv[2]);
	op = get_op_func(argv[2]);
	res = op(num1, num2);
	printf("%d\n", res);
	return (0);
}
