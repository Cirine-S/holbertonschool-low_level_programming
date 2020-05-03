#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - function
 *@head: listint
 *@index: int
 *Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index && tmp->next != NULL; i++)
	{
		node =tmp;
		tmp = tmp->next;
	}

	if (i < index)
		return (-1);
	node->next = tmp->next;
	free(tmp);

	return (1);
}
