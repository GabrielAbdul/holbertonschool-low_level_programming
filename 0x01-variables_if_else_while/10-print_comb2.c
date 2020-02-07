#include <stdio.h>
#define ZERO 48
#define COMMA 44
#define SPACE 32

/**
* main - prints all possible combination of single digit #
* separated by , and space
* Return: Always 0 Success
*/

int main(void)
{
	int x;
	int y;

	for (x = ZERO; x <= '9'; x++)
	{
		for (y = ZERO; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);
			if ((y == '9') && (x == '9'))
			{
			}
			else
			{
			putchar(COMMA);
			putchar(SPACE);
			}
		}
	}
	putchar('\n');

	return (0);
}
