#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - function
 *@head: list
 *@index: int
 *Return: list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (head);
}
