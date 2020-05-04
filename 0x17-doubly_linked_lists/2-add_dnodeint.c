#include "lists.h"

/**
 * add_dnodeint - function that adds a node to the front
 * of a doubly linked list
 *
 * @head: head node
 * @n: data
 *
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->prev = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
		return (*head);
	}

	node->next = *head;
	node->prev = NULL;
	(*head)->prev = node;
	*head = node;

	return (*head);
}
