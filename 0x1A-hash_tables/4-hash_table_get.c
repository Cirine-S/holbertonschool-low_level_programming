#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - get a value assiociated with a key
 *@ht: hash table
 *@key: key to find
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp;

	if (!key)
		return (NULL);

	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
