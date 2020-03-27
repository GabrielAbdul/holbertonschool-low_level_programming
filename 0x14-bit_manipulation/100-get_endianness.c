#include "holberton.h"
/**
  * get_endiannss - function that checks the endiannss
  *
  *
  * Return: 1 or 0
  */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	return (0);
}
