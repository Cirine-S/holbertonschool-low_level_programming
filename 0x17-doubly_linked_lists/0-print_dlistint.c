#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - function
 *@h: list
 *Return: size
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
