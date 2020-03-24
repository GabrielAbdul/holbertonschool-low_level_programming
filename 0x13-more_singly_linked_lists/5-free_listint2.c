#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - function that frees a linked list
  *
  * @head: address of a var pointing to node
  *
  * Return: void
  */


void free_listint2(listint_t **head)
{

	if (*head == NULL)
		return;
	free_listint2(&(*head)->next);
	free(*head);
	(*head) = NULL;
}
