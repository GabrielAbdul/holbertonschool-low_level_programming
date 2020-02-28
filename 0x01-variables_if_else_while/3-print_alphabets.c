#include <stdio.h>
#include <ctype.h>

/**
* main - Prints out (a-zA-Z)
* Return: Always 0 Success
*/

int main(void)
{
	int x = 'a';
	int y = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
