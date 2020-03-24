#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - adds a noew node at the end
  * o2 a linked list
  *
  * @head: pointer to the first node
  * @n: integer value of data in the node
  *
  * Return: address of node added
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *last;

	/* if malloc fails free both nodes */
	if (node == NULL)
	{
		return (node);
	}

	node->n = n;
	node->next = NULL; /* NULL because we're adding to the end */

	if (*head == NULL)
		*head = node;
	else /* else needed to prevent recopying of nodes */
	{
		last = *head;
		/* last traversing through nodes to become the last one*/
		while (last->next)
			last = last->next;
		/* set the next node after last to be our node */
		last->next = node;
	}
	return (node);

}
