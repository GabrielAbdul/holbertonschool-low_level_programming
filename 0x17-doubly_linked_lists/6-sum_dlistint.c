#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns sum of data
 *
 * @head: head node
 *
 * Return: sum of all nodes data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (!head)
		return (0);
	node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
