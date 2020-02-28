#include <stdio.h>
#include <ctype.h>

/**
* main - prints all possible combination of single digit #
* separated by , and space
* Return: Always 0 Success
*/

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
