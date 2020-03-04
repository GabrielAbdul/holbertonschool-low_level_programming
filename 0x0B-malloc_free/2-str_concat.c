#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: input string that will be appeneded
 * @s2: input string that will append to s1
 *
 * Return: p
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1len = 0, s2len = 0, i, j;
	int catlen;

	while (s1[s1len])
		s1len++;

	while (s2[s2len])
		s2len++;
	s2len++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	catlen = s1len + s2len;
	p = malloc(catlen + 1);

	if (p == NULL)
		return (NULL);

	i = 0;
	while (i < s1len)
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;
	while (i < catlen)
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	*(p + catlen) = '\0';
	return (p);

}
