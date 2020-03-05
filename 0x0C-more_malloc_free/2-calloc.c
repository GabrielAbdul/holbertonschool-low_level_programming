#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of
 *
 * @nmemb: # of elements in array
 * @size: size in bytes of array
 *
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	_memset(p, 0, nmemb * size);
	return (p);
}


/**
 * *_memset - takes n number of bytes
 * of s and replaces it with n bytes of b
 * @b: character to set
 * @s: string to replace
 * @n: number of bytes to copy
 * Return: s
 */

void *_memset(void *s, int b, unsigned int n)
{
	unsigned char *p;

	p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}

	return (s);
}
