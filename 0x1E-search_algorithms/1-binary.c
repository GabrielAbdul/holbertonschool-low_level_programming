#include "search_algos.h"
/**
 * binary_search - itarive binary search
 * @array: input array
 * @size: size of input array
 * @value: value to search for
 * Return: index if found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, m = 0;
	int r = (int)size - 1;
	int n = 0;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (n = l; n <= r; n++)
		{
			if (n == r)
			{
				printf("%d\n", array[n]);
				break;
			}
			printf("%d, ", array[n]);
		}
		m = ((l + r) / 2);
		if (array[m] < value)
			l = m +  1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

