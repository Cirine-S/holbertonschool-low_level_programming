#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - function
 *@head: list
 *@n: n
 *Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
