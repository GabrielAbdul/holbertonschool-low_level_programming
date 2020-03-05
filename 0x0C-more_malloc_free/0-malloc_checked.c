#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: bytes to allocate
 *
 * Return: (void)
 *
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
