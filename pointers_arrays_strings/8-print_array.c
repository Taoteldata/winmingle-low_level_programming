#include <stdio.h>
#include "main.h"

/** Array not pointers
 *  
 * Writing afunction that prints n elements of an array of integers
 *
 */

void print_array(int *a, int n)
{
    int i = 0;
    int divisor;
    int digit;
    int value;

    while(i < n)
    {
        value = a[i];

        /** Handling negative values */
        if(value < 0)
             {
                _putchar('-');
                value = -value;
             }

        /** Handling zero */
        if(value == 0)
            {
                _putchar('0');
            }
        
        else
            {
                /* Find the Highest divisor */
                divisor = 1;
                while(value / divisor >= 10)
                    {
                        divisor *= 10;
                    }

                /* Print each digit */
                while(divisor > 0)
                    {
                        digit = value / divisor;
                        _putchar(digit + '0');

                        value = value % divisor;
                        divisor = divisor / 10;
                    }
            }


/* Print comma and space except after last element */
         if(i < n - 1)
            {
               _putchar(',');
               _putchar(' ');
            }

        i++;
    }

      _putchar('\n');
}
