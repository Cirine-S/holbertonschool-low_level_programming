#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *reverse_listint - function
 *@head: list
 *Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
