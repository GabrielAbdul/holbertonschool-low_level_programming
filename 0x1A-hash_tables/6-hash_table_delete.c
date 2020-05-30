#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */


void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht)
	{
		for (; i < ht->size; i++)
		{
			free_hash_list(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}


/**
  * free_hash_list - function that frees a linked list
  *
  * @head: first node in the list
  *
  * Return: void
  */


void free_hash_list(hash_node_t *head)
{

	if (!head)
		return;
	free_hash_list(head->next);
	free(head->key);
	free(head->value);
	free(head);

}
