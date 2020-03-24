#include <stdio.h>
#include "lists.h"

/**
 *print_listint - function
 *@h: list
 *Return: size
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
