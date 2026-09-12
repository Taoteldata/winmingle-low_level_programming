#include <stdio.h>
#include "main.h"

/** writing a function that draw a straight line in the terminal **/

void print_line(int n){
    int i;
    if(n < 0) 
    {
        _putchar('\n');
    }
    
    i = 0;
    while(i <= 9)
    {
        _putchar('_');
        i++;
    }
    _putchar('\n');
}
