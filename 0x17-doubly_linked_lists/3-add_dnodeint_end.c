#include <stdlib.h>
#include "lists.h"
/**
 *add_dnodeint_end - function
 *@head: list
 *@n: int
 *Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *list = NULL;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		list = *head;
		while (list->next)
			list = list->next;
		list->next = node;
		node->prev = list;
	}
	return (node);
}
