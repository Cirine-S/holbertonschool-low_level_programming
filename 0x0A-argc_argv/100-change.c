#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - function
 * @argc: integer
 * @argv: char pointer
 * Return: int 0 or 1
 */
int main(int argc, char const *argv[])
{
	int n;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("0");
		return (1);
	}
	return (0);
}
