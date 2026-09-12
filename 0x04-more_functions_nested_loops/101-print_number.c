#include <stdio.h>
#include "main.h"
/** writing a function that prints an integer **/

void print_number(int n) 
{
    int digit;

    if(n < 0)
    {
        _putchar('-');
        n = -n;
    }
    
    /**This removes the last digit**/
    if(n / 10)
    {
        print_number(n / 10);
    }
    
    /**This prints out the remainder or gives the last digit**/

    digit = n % 10;

    /**This converts each digit to character representation**/

    _putchar('0' + digit);
}
