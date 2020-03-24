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
	listint_t *tmp = NULL;
	listint_t *newnode = malloc(sizeof(listint_t));

	for (i = 0; i < idx - 1; i++)
	{
		if (!(*head))
			return (NULL);
		*head = (*head)->next;
	}
	tmp = (*head)->next;
	(*head)->next = newnode;
	newnode->n = n;
	newnode->next = tmp;

	return (newnode);
}
