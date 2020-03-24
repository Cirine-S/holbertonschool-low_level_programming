#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2 - function
 *@head: listint
 */
void free_listint2(listint_t **head)
{
	*head = NULL;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

}
