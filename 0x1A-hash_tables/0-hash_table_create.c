#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a table
 *@size: hash table size
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p_hasht = malloc(sizeof(hash_table_t));
	hash_node_t *p_hashn = malloc(sizeof(hash_node_t *) * size);

	if (p_hasht == NULL)
	{
		return (NULL);
	}

	if (p_hashn == NULL)
	{
		return (NULL);
	}

	p_hasht->size = size;
	p_hasht->array = &p_hashn;

	return (p_hasht);
}
