#include <stdio.h>
#include "main.h"

/** writing a function that draw a  diagonal line in the terminal **/

void print_diagonal(int n){
    int i;
    int j;
    
    if(n <= 0)
    {
        return;
    }


    i = 0;
    while(i < n)
    {

    j = 0;
    while(j < i)
    {
        _putchar(' ');
        j++;
    }
       _putchar('\\');
       _putchar('\n');
       i++;
    }
}
