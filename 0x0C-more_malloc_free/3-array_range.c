#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: arrays 0th index
 * @max: arrays last index
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
		 
}
