#include "holberton.h"

/**
 * _memset - takes n number of bytes
 * of s and replaces it with n bytes of b
 * @b: character to set
 * @s: string to replace
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
	/* *s == s[0] */
		*s = b;
	/* s++ == s[i++] */
		s++;
	/* n is number of bytes */
		n--;
	}
	return (s);
}
