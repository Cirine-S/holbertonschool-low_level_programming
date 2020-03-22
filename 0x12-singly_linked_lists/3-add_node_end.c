#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_node - function
 *@head: list
 *@str: str
 *Return: list
 */
list_t *add_node_end(list_t **head, const char *str)
{
        int i = 0;
        list_t *node;
	list_t *list;

        if (!str)
		return (NULL);

        node = malloc(sizeof(list_t));

        if (!node)
                return (NULL);

        node->str = strdup(str);
        for (i = 0; str[i]; i++)
                ;
        node->len = i;
        node->next = NULL;

	if (*head == NULL)
	*head = node;

	else
	{
	list = *head;

		while (list)
			list = list->next;

	list->next = node;
        }

	return (node);
}
