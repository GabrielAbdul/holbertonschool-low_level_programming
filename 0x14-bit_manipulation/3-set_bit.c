#include "holberton.h"
#include <stdio.h>

/**
  * set_bit - sets bit to 0
  *
  * @n: pointer to an int
  * @index: position of the bit you want to set to 0
  *
  * Return: 1 On success
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
		return (1);
	return (-1);

}
