#include <stdio.h>
#include "lists.h"
/**
 *list_len - function
 *@h: list
 *Return: size
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
