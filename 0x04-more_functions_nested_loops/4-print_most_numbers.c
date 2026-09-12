#include <stdio.h>
#include "main.h"

/** Writing a function that prints numbers from 0 to 9 except 2 and 4 followed by newline **/

void print_most_numbers(void){

    int n = 0;
    while (n <= 9)
    {
    if (n != 2 && n !=4)
    {
        _putchar('0' + n);
    }
        n++;
    }
        _putchar('\n');
}
