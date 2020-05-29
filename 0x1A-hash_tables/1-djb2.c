#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - implement the djb2 algorithm
 *@str: str
 * Return: int
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 0;
	int i = 0;

	hash = 5381;
	while (str[i] != '\0')
	{

		hash = hash * 33 + str[i];
		i++;
	}
	return (hash);
}
