#include <stdio.h>
#include <ctype.h>

/**
* main - Entry
* Return: Always 0 Success
*/

int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		if ((x != 'e') && (x != 'q'))
		{
			putchar(x);
		x++;
		}
	}
	putchar('\n');
	return (0);
}
