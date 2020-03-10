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
		puts("Name: (nil)");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		puts("Owner: (nil)");
	else
	printf("Owner: %s\n", d->owner);
}
