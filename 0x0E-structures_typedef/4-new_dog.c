#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - function
 *@name: char
 *@age: float
 *@owner: char
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	int i, j;

	for(i = 0; name[i] != '\0'; i++)
		;
	for(j = 0; owner[j] != '\0'; j++)
                ;
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
