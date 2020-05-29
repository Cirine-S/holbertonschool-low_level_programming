#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - add element to a hash table
 *@ht: the hash table to add
 *@key: key
 *@value: value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	hash_node_t *tmp;
	int i = 0;

	if (ht == NULL || key == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];


	while (tmp)
	{
		if (strcmp((const char *)key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}


	if (tmp == NULL)
	{
	hn = malloc(sizeof(hash_node_t));
	if (!hn)
		return (0);

	hn->key = strdup(key);
	hn->value = strdup(value);
	hn->next = ht->array[i];
	ht->array[i] = hn;
	return (1);
	}


	return (1);
}
