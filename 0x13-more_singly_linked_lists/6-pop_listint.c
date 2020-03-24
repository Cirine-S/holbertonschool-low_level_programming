#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *pop_listint - function
 *@head: list
 *Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead = NULL;
	int a;

	if (!head)
		return (0);

	a = (*head)->n;
	newhead = (*head)->next;
	free(*head);
	(*head) = newhead;
	return (a);
}
