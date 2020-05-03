#include <stdio.h>
#include "lists.h"
/**
 *dlistint_len - function
 *@h: list
 *Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
