#include "holberton.h"

/**
 * _strpbrk - prints everything after and including first occurence
 * of character found in accept
 * @accept: string of characters
 * @s: string to search
 * Return: string
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
