#include "holberton.h"

/**
 * _strncat - function that copies a string.
 * @dest: string that will get src copied to it
 * @src: string to be copied
 * @n: size limiter of src string
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];
	for (; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
