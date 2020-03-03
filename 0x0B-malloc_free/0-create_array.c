#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - function that creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: size of character array (string)
 * @c: character to initialze every element in array with
 *
 * Return: pointer to the array
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(sizeof(char) * size);
	
	if (p == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	*(p + i) = '\0';
	return (p);
}
