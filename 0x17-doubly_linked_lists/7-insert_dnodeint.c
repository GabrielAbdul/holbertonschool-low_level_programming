#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts new node
 * at given position
 *
 * @h: head node
 * @idx: index
 * @n: nodes data
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	unsigned int n = 0;

	node->n = n;
	if (!h || *h == NULL || !node)
		return (NULL);

	h_temp = *h;
	while (n < idx)
		h_temp = (*h)->next

	node = h_temp;

	return (node);

	
}
