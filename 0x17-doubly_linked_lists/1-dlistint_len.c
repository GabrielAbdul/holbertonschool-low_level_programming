#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns number of nodes
 * in a doubly linked list
 *
 * @h: head node
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}
