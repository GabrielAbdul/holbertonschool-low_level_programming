

#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets node at given index
 *
 * @head: head node
 * @index: index of node to retreive
 *
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int n = 0;

	if (!head)
		return (NULL);

	node = head;

	while (n < index)
	{
		node = node->next;
		n++;
	}
	return (node);
}
