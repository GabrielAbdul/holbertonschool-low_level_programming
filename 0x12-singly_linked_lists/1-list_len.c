#include "lists.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
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
