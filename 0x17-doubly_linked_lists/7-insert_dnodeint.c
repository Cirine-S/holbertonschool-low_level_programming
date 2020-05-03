#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - function
 *@h: list
 *@idx: int
 *@n: int
 *Return: list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node = *h;
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!node->next)
			return (NULL);
		node = node->next;
	}
	newnode->next = node->next;
	node->next = newnode;
	newnode->prev = node;

	return (newnode);
}
