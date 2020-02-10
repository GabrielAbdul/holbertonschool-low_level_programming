#include <stdio.h>
#include <ctype.h>
#define ZERO 48
#define TEN 58
#define NEWLINE 10

/**
* main - function that prints all single digit
* numbers of base 10 starting from 0 using putchar
* Return: Always 0 Success
*/

int main(void)
{
	int x = ZERO;

	while (x < TEN)
	{
		putchar(x);
		x++;
	}
	putchar(NEWLINE);
	return (ZERO);
}
