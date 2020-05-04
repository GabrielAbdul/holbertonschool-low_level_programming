#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints a doubly linked list
 *
 * @h: head node
 *
 * Return: number of noded
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
