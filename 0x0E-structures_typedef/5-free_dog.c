#include "dog.h"

/**
 * free_dog - function that frees a dog
 *
 * @d: struct to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	int c;

	for (c = 0; d->c != NULL; c++)
		free(d->c);
	free(d);
}
