#include "holberton.h"

/**
 * is_prime_number - function that returns 1 if n is a prime number
 * otherwise return 0
 *
 * @n: integer test prime
 * Return: int
 */

int is_prime_number(int n)
{
	return (is_prime_number_h(2, n))	
}

/**
 * int is_prime_number_h - helper function to determine
 * if an input number is prime
 * @base: starts at 2, increments. What we use to check n with
 * Return: 1 if number is prime
 */
int is_prime_number_h(int base, int n)
{
	if (n % base == 0 || n < 2)
		return (0);
	else if (base == n - 1)
		return (1);
	else if (n > base)
		return (is_prime_number_h(base + 1, n)
	else
		return (1);
}
