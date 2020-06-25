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
	unsigned int i = 0;
	dlistint_t *new_node, *tmp;

	if (!h || !(*h))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	if (!new_node)
		return (NULL);


	for (tmp = *h; tmp && i < idx - 1; tmp = tmp->next, i++)
		;

	new_node->next = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	tmp->prev = tmp->prev->prev;

	return (new_node);
}
