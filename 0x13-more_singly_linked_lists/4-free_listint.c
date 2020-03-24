#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - function that frees a linked list
  *
  * @head: first node in the list
  *
  * Return: void
  */


void free_listint(listint_t *head)
{

	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
