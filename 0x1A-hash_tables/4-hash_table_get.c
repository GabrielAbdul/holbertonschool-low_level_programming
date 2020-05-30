#include "hash_tables.h"

/**
 * hash_table_get - function that retrievs a value with a key
 *
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;
 
	if (!ht || !key)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	
	if (ht->array[i])
	{
		for (node = ht->array[i]; node; node = node->next)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
		}
	}
	return (NULL);
}
