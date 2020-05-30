#include "hash_tables.h"


/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int flag = 0;

	if (!ht)
		return;
	printf("{");

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				for (node = ht->array[i]; node; node = node->next)
				{
					if (flag == 1)
						printf(", ");
					if (node)
					{
						printf("'%s': '%s'", node->key, node->value);
						flag = 1;
					}
				}
			}
		}
	}

	printf("}");
	putchar('\n');

}
