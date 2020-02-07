#include <stdio.h>
#include <ctype.h>

/**
* main - Entry
* Return: Always 0 Success
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
