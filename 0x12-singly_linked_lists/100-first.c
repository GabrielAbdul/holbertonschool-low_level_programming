#include <stdio.h>

/**
  * startup_print - functino that prints text before main is executed
  *
  * Return: void
  */
void startup_print(void)__attribute__ ((constructor));

void startup_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
