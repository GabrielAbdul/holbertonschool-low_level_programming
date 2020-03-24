#include "lists.h"
#include <stdlib.h>

/**
  * sum_listint - returns the sum of all the data
  * members of the nodes
  *
  * @head: first node
  *
  * Return: sum of node data
  */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int result = 0;

	if (!head)
		return (0);
	while (node)
	{
		result = node->n;
		node = node->next;
	}
	return (result);

}
