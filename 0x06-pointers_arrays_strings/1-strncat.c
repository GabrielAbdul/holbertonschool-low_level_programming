#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string that will get src appended to it
 * @src: string to be added
 * @n: size limiter of src string
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length;
	int index;

	dest_length = _strlen(dest);

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[dest_length + index] = src[index];

	dest[dest_length + index] = '\0';

	return (dest);
}

/**
 * _strlen - function that returs the length of a string
 *@s: string input by a user
 * Return: (void)
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
