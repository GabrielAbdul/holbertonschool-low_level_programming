#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @n: limited number of bytes to copy
 * @s1: string to append
 * @s2: string that will be appended
 * Return: new string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1len, s2len, lens, i, j;

	s1len = len(s1);
	s2len = len(s2);
	lens = s1len + s2len;

	if (n >= lens)
	{
		str_concat(s1, s2);
	}
	else
	{
		s2len = n;
		lens = s1len + s2len;
		p = malloc(sizeof(char) * lens);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		i = 0;
		while (i < s1len)
		{
			p[i] = s1[i];
			i++;
		}
		j = 0;
		while (i < lens)
		{
			*(p + i) = *(s2 + j);
			i++;
			j++;
		}
		*(p + lens) = '\0';
	}
	return (p);
}

/**
 * len - calculate string length
 *
 * @string: string to calculate length for
 *
 * Return: length of string
 */
int len(char *string)
{
	int len = 0;

	while (string[len])
		len++;

	return (len);
}

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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	catlen = s1len + s2len;
	p = (char *)malloc(catlen + 1);
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
