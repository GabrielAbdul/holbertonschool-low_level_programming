#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: input arry to search for int
 * @size: size of input array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (size <= 0)
		return (-1);

	for (; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
