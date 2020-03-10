#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - function
 *@name: char
 *@age: float
 *@owner: char
 *Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	int i, j;
	char *n, *o;
	float a;

	if (!dog || name == NULL || !owner || age < 0)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	n = malloc(i + 1);
	o = malloc(j + 1);
	if (!n)
	{
		free(dog);
		free(n);
		return (NULL);
	}
	if (!o)
	{
		free(dog);
		free(n);
		free(o);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		n[i] = name[i];
	n[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		o[i] = owner[i];
	o[i] = '\0';
	a = age;
	dog->name = n;
	dog->age = a;
	dog->owner = o;
	return (dog);
}
