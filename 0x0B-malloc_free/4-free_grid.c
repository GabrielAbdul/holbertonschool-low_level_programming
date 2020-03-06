#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2d array of integers
 *
 * @grid: array that will be freed
 * @height: input array rows
 *
 * Return: pointer to a 2d array of integers
 */

void free_grid(int **grid, int height);
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
