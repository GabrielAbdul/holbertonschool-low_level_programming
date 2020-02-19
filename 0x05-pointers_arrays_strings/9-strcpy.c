#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by *src
 * , including the terminating null byte, to the buffer pointed to by dest
 * @dest: copied string
 * @src: string to be copied
 * Return: (void)
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	return (dest);
	_putchar('\n');
}

/**
 * _strlen - functino that returs the length of a string
 * @s: string input by a user
 * Return: (void)
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
