#include "holberton.h"

/**
 * _strpbrk - prints everything after and including first occurence
 * of character found in accept
 * @accept: string of characters
 * @s: string to search
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				return (s + i);
		}
return ('\0');
}
