#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - function
 *@head: list
 *@idx: int
 *@n: int
 *Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node = *head;
	listint_t *newnode = NULL;

	if ((*head) == NULL)
	return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!node->next)
			return (NULL);
		node = node->next;
	}
	newnode->next = node->next;
	node->next = newnode;

	return (newnode);
}
