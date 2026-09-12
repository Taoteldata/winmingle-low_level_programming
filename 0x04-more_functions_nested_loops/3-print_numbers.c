#include <stdio.h>
#include "main.h"

/** Writing a function that prints numbers from 0 to 9 followed by newline **/

void print_numbers(void){

    int n = 0;
    while (n <= 9)
    {
        _putchar('0' + n);
        n++;
    }
        _putchar('\n');
}
