#include "holberton.h"

/**
 * _strstr - function that locates a substringe
 *
 * @haystack: string to search
 * @needle: string of characters to check haystack with
 * Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; *haystack; haystack++)
	{
		for (i = 0; haystack[i] == needle[i] i++)
			;
		if (needle[i] == '\0')
			return (haystack);
	}
return ('\0');
}
