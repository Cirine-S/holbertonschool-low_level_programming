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

	if (!head)
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}

	for (i = 0; i < (index - 1) && node; i++)
		node = node->next;
	if (!node || !node->next)
		return (-1);
	tmp = node->next->next;
	free(node->next);
	node->next = tmp;

	return (1);
}
