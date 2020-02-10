#include <stdio.h>
#include <ctype.h>
#define ZERO 48
#define TEN 58
#define LOWERa 97
#define LOWERg 103
#define NEWLINE 10

/**
* main - prints all the numbers of base 16 in lowercase
* Return: Always 0 Success
*/

int main(void)
{
	int x;

	for (x = ZERO; x < TEN; x++)
	{
		putchar(x);
	}
	for (x = LOWERa; x < LOWERg; x++)
	{
		putchar(x);
	}

	putchar(NEWLINE);

	return (0);
}
