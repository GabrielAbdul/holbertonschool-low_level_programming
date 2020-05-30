#include "hash_tables.h"


/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value of key
 *
 * Return: 1:0 SUCCESS:FAILURE
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	if (!ht || !key || strcmp(key, "") == 0)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	for (node = ht->array[i]; node; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);

	if (!ht->array[i])
	{
		ht->array[i] = node;
		node->next = NULL;
		return (0);
	}
	if (ht->array[i])
	{
		tmp = ht->array[i];
		node->next = tmp;
		ht->array[i] = node;
	}
	return (1);
}
