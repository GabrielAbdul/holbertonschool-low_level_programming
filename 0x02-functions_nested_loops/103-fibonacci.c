#include <stdio.h>

/**
 * main - function that prints the first 50 fibonacci numbers
 * starting with 1 and 2, followed by a new line
 *
 * Return: (0)
 */

int main(void)
{
 /*  fibonacci sequence 1, 2, 3, 5, 8, 13, 21... */

	unsigned long firstNum;
	unsigned long secondNum;
	unsigned long temp;
	unsigned long sum;
	int count;

	firstNum = 1;
	secondNum = 1;

	for (count = 0; count <= 30; count++)
	{
		temp = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = temp;
		if (temp % 2 == 0)
		{
			sum += temp;
		}
	}
	printf("%ld", sum);

	printf("\n");

	return (0);
}
