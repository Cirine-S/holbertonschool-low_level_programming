#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - function
 *@min: int
 *@max: int
 *Return: int
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i - min] = i;
	return (arr);
}
