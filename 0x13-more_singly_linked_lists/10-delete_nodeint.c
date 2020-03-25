#include "lists.h"
#include <stdlib.h>

/**
  * delete_nodeint_at_index
  *
  *
  *
  *
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int count = 0;


	if (head == NULL || *head == NULL)
	{
		free(*head);
		return (-1);
	}
	if (idx == 0)
	{
		*head = (*head)->next;
		free(*head);
	}
	else
	{	
		node = *head;
		while (count < idx)
		{
			if (node->next == NULL)
				return (-1);
			node = node->next;
			count++;
		}

		tmp = node;
		free(node);

		node = *head;
		for (count = 0; count < idx - 1; count++)
		{
			if (node->next == NULL)
				return (-1);
			node = node->next;
		}

		node->next = tmp->next;
	}
	return (1);	
}
