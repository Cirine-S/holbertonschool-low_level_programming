#include <stdio.h>
#include "dog.h"
/**
 *free_dog - function
 *@d: dog
 *Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
