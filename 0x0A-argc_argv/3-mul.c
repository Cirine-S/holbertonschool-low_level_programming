#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 *@argc: number of arguments
 *@argv: array of strings
 *Return: 0
 */
int main(int argc, char **argv)
{
	int num1 = 0;
	int num2 = 0;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
}
	else
		num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	return (0);
}
