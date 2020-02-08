#include <stdio.h>
#define ZERO 48
#define SEVEN 55
#define EIGHT 56
#define NINE 57
#define COMMA 44
#define SPACE 32
#define NEWLINE 10

/**
* main - prints zero to 89 with no repeating integers
* Return: 0 Always (Success)
*/

int main(void)
{

	int first;
	int middle;
	int last;

	for (first = ZERO; first <= SEVEN; first++)
	{
		for (middle = first + 1; middle <= EIGHT; middle++)
		{
			for (last = middle + 1; last <= NINE; last++)
			{
			putchar(first);
			putchar(middle);
			putchar(last);
			if ((first == SEVEN) && (middle == EIGHT) && (last == NINE))
			{
				putchar(NEWLINE);
			}
			else
			{
				putchar(COMMA);
				putchar(SPACE);
			}
			}
		}
	}
return (0);
}
