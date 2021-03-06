#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - inserts a new node at given pos
  *
  * @head: address of the var pointing to a head
  * @idx: index
  * @n: data
  *
  * Return: address of new node (on success)
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node_to_add = malloc(sizeof(listint_t));
	listint_t *node;
	listint_t *prev_node;
	unsigned int count = 0;

	if (!node_to_add)
		return (NULL);

	if (head == NULL)
		return (NULL);
	if (idx == 0 || *head == NULL)
	{
		node_to_add->n = n;
		node_to_add->next = *head;
		*head = node_to_add;
	}
	else
	{
		node = (*head);
		while (count < idx)
		{
			if (node == NULL)
				return (NULL);
			count++;
			prev_node = node;
			node = node->next;
			if (count == idx)
			{
				prev_node->next = node_to_add;
				node_to_add->n = n;
				node_to_add->next = node;
			}
		}
	}
	return (node_to_add);
}
