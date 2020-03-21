#include "lists.h"
#include <stdlib.h>
/**
 * free_list - functino that frees a list_t list
 *
 * @head: head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
