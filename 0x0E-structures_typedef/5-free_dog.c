#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees a dog
 *
 * @d: struct to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
