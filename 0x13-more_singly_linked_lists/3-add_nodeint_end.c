#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - function
 *@head: list
 *@n: int
 *Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *list = NULL;

	node = malloc(sizeof(listint_t));
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
	}
	return (node);
}
