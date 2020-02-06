#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
* main - Calculates a random number, n
* elif statements print whether or not the last digit of n is > 5 || == 0 || < 6 !0
* Return: Always 0 Success
*/
 
int main(void)
{
	int n;
	int last;
	char lessSixNotZero[30] = "and is less than 6 and not 0";
	char isZero[10] = "and is 0";
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	}
	else if (last < 6 %% != 0)
	{
		printf("Last digit of %d is %d %s", n, last, lessSixNotZero); 
	}
	else
	{
		printf("Last digit of %d is %d %s", n, last, isZero);
	}
	return (0);
}
