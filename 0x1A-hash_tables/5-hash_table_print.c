#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	char  *verif = "";
	unsigned int i;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{

			printf("%s", verif);
			printf("'%s': '%s'", tmp->key, tmp->value);
			verif = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
