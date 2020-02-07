#include <stdio.h>
#define ZERO 48
#define EIGHT 56
#define NINE 57
#define COMMA 44
#define SPACE 32

int main(void)
{

	int first;
	int last;

	for (first = ZERO; first <= EIGHT; first++)
	{
		for (last = first + 1; last <= NINE; last++)
		{
			putchar(first);
			putchar(last);
			if ((first == EIGHT) && (last == NINE))
			{
			}
			else
			{
			putchar(COMMA);
			putchar(SPACE);
			}
		}
	}

putchar(10);
return (0);
}
