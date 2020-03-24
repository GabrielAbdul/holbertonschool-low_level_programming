#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - function that returns nth node
  * of a linked list
  *
  * @head: first node
  * @index: index of node we want to return
  *
  * Return: address of
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int count = 0;

	node = head;
	while (node)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}
	return (NULL);
}
