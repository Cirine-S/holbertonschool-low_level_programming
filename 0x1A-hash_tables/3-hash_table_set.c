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
	hash_node_t *hn = malloc(8 * 1024);
	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));

	if (!ht || !ht)
		return (0);

	ht->size = 1024;
	ht->array = &hn;

	i = key_index((void *)key, 1024);

	hn->key = (void *)key;
	hn->value = (void *)value;
	hn->next = NULL;

	ht->array[i] = hn;
	return 1;
}
