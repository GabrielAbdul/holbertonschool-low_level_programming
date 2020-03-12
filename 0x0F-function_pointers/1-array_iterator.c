#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - functino that executes a function given as
 * a parameter on each element of an array
 *
 * @array: input array
 * @size: size of input array
 * @action: action to perform on each element of input array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array == NULL || action == NULL)
		return (NULL);
	for (; n < size; n++)
	{
		action(array[n]);
	}
}
