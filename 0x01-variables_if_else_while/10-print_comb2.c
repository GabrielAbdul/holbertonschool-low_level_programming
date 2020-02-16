#include <stdio.h>
#define ZERO 48
#define NINE 57
#define COMMA 44
#define SPACE 32

/**
* main - prints all possible combination of single digit #
* separated by , and space
* Return: Always 0 Success
*/

int main(void)
{
	int first;
	int last;

	for (first = ZERO; first <= NINE; first++)
	{
		for (last = ZERO; last <= NINE; last++)
		{
			putchar(first);
			putchar(last);
			if ((first < NINE) || (last < NINE))
			{
				putchar(COMMA);
				putchar(SPACE);
			}
		}

	}
	putchar('\n');

	return (0);
}
