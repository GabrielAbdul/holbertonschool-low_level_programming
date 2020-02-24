
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
	unsigned int count = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
				count++;
			if (*accept != *s)
				break;
			accept++;
		}
	s++;

	}
	return (count);
}
