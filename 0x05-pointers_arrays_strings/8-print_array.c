#include "holberton.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @n: number of elements in the array to be printed
 * @a: name of array
 * Return: (void)
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i <= n; i++)
		printf("%d, \n", a[i]);

}

	


