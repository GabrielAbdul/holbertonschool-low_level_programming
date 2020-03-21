#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - functino that frees a list_t list
 *
 * @head: head node
 *
 * Return: void
 */

size_t print_list(const list_t *h)
{
	list_t *node;

	while (h)
	{
		node = h;
		h = h->next;
		free(node);
	}
}
