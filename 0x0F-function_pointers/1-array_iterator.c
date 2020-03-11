#include <stdio.h>
/**
 *array_iterator - function
 *@array: int
 *@size: size_t
 *@action: func
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
