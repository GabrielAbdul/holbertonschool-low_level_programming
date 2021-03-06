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
	listint_t *node; /* node pointing to head */
	int head_data; /* assigning data of head to var */

	if (head == NULL || *head == NULL)
		return (0);

	node = *head;
	head_data = node->n;
	(*head) = (*head)->next; /* move head to the next node in the list
				  * orphaning original head
				  */

	free(node);
	return (head_data);
}
