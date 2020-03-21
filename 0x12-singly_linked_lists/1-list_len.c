#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: head node
 *
 * return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
