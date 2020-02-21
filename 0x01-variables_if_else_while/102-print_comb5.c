#include <stdio.h>

/**
* main - prints zero to 89 with no repeating integers
* Return: 0 Always (Success)
*/

int main(void)
{

	int first;
	int last;

	for (first = 0; first <= 98; first++)
	{
		for (last = first + 1; last <= 99; last++)
		{
			putchar((first / 10) + '0');
			putchar((first % 10) + '0');
			putchar(' ');
			putchar((last / 10) + '0');
			putchar((last % 10) + '0');
			if (first == 98 && last == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

putchar(10);
return (0);
}
