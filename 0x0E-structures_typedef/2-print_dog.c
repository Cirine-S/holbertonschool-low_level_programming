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
		printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
}
