#include "holberton.h"

/**
 * _memcpy - takes n number of bytes
 * of src and copies it with n bytes of dest
 *
 * @n: number of bytes to copy
 * @src: input string to be copied
 * @dest: destination string
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++, n--)
		dest[i] = src[i];
	return (dest);
}
