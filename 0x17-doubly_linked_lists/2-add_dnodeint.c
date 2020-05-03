#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint - function
 *@head: list
 *@n: n
 *Return: list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;

	return (*head);
}
