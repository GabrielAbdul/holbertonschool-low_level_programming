#include <stdio.h>
#define COMMA 44
#define SPACE 32

int main(void)
{

	int first;
	int last;

	for (first = '0'; first <= '8'; first ++)
	{
		for (last = first + 1; last <= '9'; last++)
		{
			putchar(first + 0);
			putchar(last + 0);
			if ((first == '8') && (last == '9'))
			{
			}
			else
			{
			putchar(SPACE);
			putchar(COMMA);
			}
		}
	}

putchar(10);
return (0);
}
