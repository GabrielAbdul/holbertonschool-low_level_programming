#include "holberton.h"

/**
 * print_alphabet - print lower case alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
/**
 * print_alphabet_x10 - calls print_alphabet 10 times.
 *
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}
