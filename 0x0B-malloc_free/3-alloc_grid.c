#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a 2d array of integers
 *
 * @width: input array collums
 * @height: input array rows
 *
 * Return: pointer to a 2d array of integers
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int**)malloc(height * (sizeof(int *)));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = (int*)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
