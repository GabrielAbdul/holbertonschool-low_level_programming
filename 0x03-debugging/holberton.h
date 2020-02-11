#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

void positive_or_negative(int i);

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}
#endif
