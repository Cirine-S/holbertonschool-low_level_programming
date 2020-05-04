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
	dlistint_t *newnode = NULL, *storenext = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)
	{
		if (!node)
			*h = newnode;
		else
		{
		newnode->next = *h;
		(*h)->prev = newnode;
		*h = newnode;
		}
		return (newnode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		node = node->next;
	}
	if (node->next)
	{
	storenext = node->next;
	node->next = newnode;
	newnode->prev = node;
	newnode->next = storenext;
	storenext->prev = newnode;
	}
	else
	{
		newnode->prev = node;
		node->next = newnode;
	}
	return (newnode);
}
