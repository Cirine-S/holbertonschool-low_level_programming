#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - function
 *@head: list
 *@index: int
 *Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = NULL, *node = *head;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = node->next;
		free(node);
		node->next = tmp;

		return (1);
	}

	for (i = 0; i <= index; i++)
	{
		if (!node->next)
			return (-1);
		node = node->next;
	}
	tmp = node->next;
	free(node);
	node->next = tmp;

	return (1);
}
