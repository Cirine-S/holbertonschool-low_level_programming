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
	int n = 0, m = 0;

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
	else
	{
		m = m + n / 25;
		n = n % 25;
		m = m + n / 10;
		n = n % 10;
		m = m + n / 5;
		n = n % 5;
		m = m + n / 2;
		n = n % 2;
		m = m + n;
		printf("%d\n", m);
	}
	return (0);
}
