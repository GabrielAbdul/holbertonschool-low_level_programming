#include "holberton.h"
#include <stdlib.h>

/**
  * get_bit - gets bit
  *
  * @n: number
  * @index: index
  *
  * Return: bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_status;


	bit_status = (index < sizeof(n) * 8) ? n >> index & 1 : 2;
	if (bit_status > 1)
		return (-1);
	return (bit_status);
}
