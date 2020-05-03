#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint - function
 *@head: listint
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
