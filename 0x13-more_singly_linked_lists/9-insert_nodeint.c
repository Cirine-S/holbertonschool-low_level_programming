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
	listint_t *tmp = NULL, *node = *head;
	listint_t *newnode = NULL;

	if ((*head) == NULL)
	return (NULL);

newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
	{
		if (!node->next)
			return (NULL);
		node = node->next;
	}
	tmp = node->next;
	node->next = newnode;
	newnode->n = n;
	newnode->next = tmp;

	return (newnode);
}
