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
	dlistint_t *tmp = *head, *storenext = NULL, *storeprev = NULL;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (tmp->next == NULL)
			*head = NULL;
		else
		{
		*head = tmp->next;
		tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}

	for (i = 0; i < index; i++)
		tmp = tmp->next;

	if (tmp->next)
	{
		storenext= tmp->next;
		storeprev = tmp->prev;

		storenext->prev = tmp->prev;
		storeprev->next = tmp->next;
	}
	else
		tmp->prev->next = NULL;

	free(tmp);

	return (1);
}
