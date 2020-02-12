#include "holberton.h"
#define ZERO 48
#define COLON 47
#define NEWLINE 10

/**
 * jack_bauer - prints every minute of the day of, starting from 00:00 to 23:59
 *
 * Return: (void)
 *
 */

void jack_bauer(void)
{
	int hour;
	int minutes;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hour / 10) + ZERO);
			_putchar((hour % 10) + ZERO);
			_putchar(COLON);
			_putchar((minutes / 10) + ZERO);
			_putchar((minutes % 10) + ZERO);
			_putchar(NEWLINE);
		}
	}
}
