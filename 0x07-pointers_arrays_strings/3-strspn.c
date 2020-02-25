#include "holberton.h"

/**
 * _strspn - search a string for a set of bytes
 *
 * @s: string to search
 * @accept: string of text you are searching for in s
 *
 * Return: pointer to dest
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			return (i);
		}
return ('\0');
}
