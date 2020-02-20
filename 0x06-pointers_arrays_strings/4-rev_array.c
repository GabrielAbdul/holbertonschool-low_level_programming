#include "holberton.h"

/**
 * reverse_array - function that reverses the contant
 * of an array of integers.
 * @a: integer array
 * @n: number of elements in the array
 * Return: Ascii value of the difference of s1 and s2
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int tmp;


	while (start <= end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;

	}
}
