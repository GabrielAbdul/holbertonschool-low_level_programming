#include <stdlib.h>
#include "lists.h"
/**
  * add_nodeint - adds a new node at the beginning
  * of a linked list
  *
  * @head: pointer to a node
  * @n: int form of data
  *
  * Return: address of new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
	{	free(node);
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	free(node);
	return (*head);

}
