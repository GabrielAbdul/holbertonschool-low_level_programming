#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 *
 * @head: head node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
