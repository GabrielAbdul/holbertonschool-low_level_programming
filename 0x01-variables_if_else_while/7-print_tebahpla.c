#include <stdio.h>
#include <ctype.h>

/**
* main - prints a-z in reverse using putchar
* Return: Always 0 Success
*/

int main(void)
{
	int x;
	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
