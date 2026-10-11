#include <stdio.h>
#include "main.h"

/* Writing a function that prints an integer using only _putchar */

void print_number(int n)
{
    int digit;
    if(n < 0)
    {
        _putchar('-');
        n = -n;
    }

    /*Removal of the last digit */

    if(n / 10)
    {
        print_number(n / 10);
    }

    /*Print out the last digits */

    digit = n % 10;

    /* Conversion each digit to character representation */
    _putchar('0' + digit);
}
