
#include "holberton.h"

/**
 * _strspn - search a string for a set of bytes
 *
 * @c: character to locate
 * @s: input string to look for c in 
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
