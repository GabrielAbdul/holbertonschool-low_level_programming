#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a mem block
 * using malloc and free
 *
 * @ptr: ptr
 * @old_size: old size
 * new_size: new size
 *
 * Return: (p);
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		free(old_size);
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr)
		return(NULL);
	}
	p = malloc(new_size);
	free(ptr);

	return(p);
}
