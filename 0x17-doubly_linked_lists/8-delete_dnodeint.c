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
		(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}

	for (i = 0; i < index && tmp->next != NULL; i++)
	{
		tmp = tmp->next;
	}

	if (i < index)
		return (-1);

	if (tmp->next == NULL)
	{
	storeprev = tmp->prev;
	free(tmp);
	return (1);
	}

	storenext = tmp->next;
	storeprev = tmp->prev;
	storenext->prev = storeprev;
	storeprev->next = storenext;
	free(tmp);

	return (1);
}
