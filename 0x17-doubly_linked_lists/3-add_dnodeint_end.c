#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of a
 * doubly linked list
 *
 * @head: head node
 * @n: data
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *search, *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!head || *head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (*head);
	}
	search = *head;

	while (search->next)
		search = search->next;
	search->next = node;
	node->prev = search;
	return (node);
}
