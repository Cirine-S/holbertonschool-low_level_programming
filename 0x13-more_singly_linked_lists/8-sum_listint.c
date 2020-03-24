#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_listint - function
 *@head: list
 *Return: int
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
}
	return (sum);
}
