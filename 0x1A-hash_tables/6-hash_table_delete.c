#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to hash table.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *n, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			n = tmp->next;

			free(tmp);
			tmp = n;
		}
	}

	free(ht->array);
	free(ht);
}
