#include <stdio.h>
#define LOWERa 97
#define LOWERz 122
#define NEWLINE 10

/**
* main - prints a-z in reverse using putchar
* Return: Always 0 Success
*/

int main(void)
{
	int x;

	for (x = LOWERz; x >= LOWERa; x--)
	{
		putchar(x);
	}

	putchar(NEWLINE);

	return (0);
}
