#include "holberton.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int s1len = 0, s2len = 0, i, j;
	int catlen;


	while (s1[s1len])
	{
		s1len++;
	}
	while (s2[s2len])
	{
		s2len++;
	}
	
	catlen = s1len + s2len;
	p = malloc(catlen + 1);

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
	return (p);	
}
