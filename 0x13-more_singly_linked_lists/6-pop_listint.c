#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - removes the first node of the
  * linked list
  *
  * @head: pointer to the head node
  *
  * Return: data of the head node
  */


int pop_listint(listint_t **head)
{
	listint_t *node = *head; /* node pointing to head */
	int head_data = node->n; /* assigning data of head to var */

	if (*head == NULL)
		return (0);

	(*head) = (*head)->next; /* move head to the next node in the list
				  * orphaning original head
				  */

	free(node);
	return (head_data);
}
