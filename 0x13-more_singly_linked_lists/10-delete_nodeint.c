#include "lists.h"
#include <stdlib.h>

/**
  * delete_nodeint_at_index - function that deletes a node
  *
  * @head: address of var pointing to head
  * @index: node to delete
  *
  * Return: 1 on success
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
	}
	else
	{
		while (count < index - 1)
		{
			node = node->next;
			if (node->next == NULL)
				return (-1);
			count++;
		}

		tmp = node->next;
		node->next = node->next->next;

		free(tmp);
	}
	return (1);
}
