#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *main - function
 *@ac: int
 *@av: char
 *Return: int
 */
int main(int ac, char **av)
{
	int file_from, file_to, nbf, nbt;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	return (0);
}
