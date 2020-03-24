#include <stdlib.h>
#include "lists.h"

/**
 *free_listint - function
 *@head: listint
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
