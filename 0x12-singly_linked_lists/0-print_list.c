#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count += 1;
		h = h->next;
	}
	return (count);
}
