#include <stdio.h>

/**
 * print_to_98 - please accept my description betty
 *
 * @x: integer input by user
 * Return: (void)
 */

void print_to_98(int x)
{
	if (x <= 98)
	{
		for (; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d\n", x);
			}
			else
			{
				printf("%d, ", x);
			}

		}
	}
	else
	{
		for (; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d\n", x);
			}
			else
			{
				printf("%d, ", x);
			}

		}
	}

}
