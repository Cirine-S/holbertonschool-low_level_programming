#include <stdio.h>
#include "dog.h"
/**
 *print_dog - function
 *@d: dog
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		puts("(nil)");
	else
		printf("Name: %s \n", d->name);
	printf("Age: %f \n", d->age);
	printf("Owner: %s \n", d->owner);
}
