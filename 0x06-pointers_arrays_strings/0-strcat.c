#include "holberton.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string that will get src appended to it
 * @src: string to be added
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
		continue;
	for (; src[j] != '\0'; j++, i++)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
