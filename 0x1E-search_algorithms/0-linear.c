#include "search_algos.h"
/**
 * linear_search - itarive linear search
 * @array: input array
 * @size: size of input array
 * @value: value to search for
 * Return: index if found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
