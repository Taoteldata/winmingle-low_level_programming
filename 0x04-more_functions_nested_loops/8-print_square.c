#include <stdio.h>
#include "main.h"

/** writing a function that print a square in the terminal, followed by new line **/

void print_square(int size)
{
    int i;
    int j;

    if(size <= 0)
    {
        return;
    }

    for(i = 0; i < size; i++)
    {
        
    for(j = 0; j < size; j++)
    {
        _putchar('#');
    }

        _putchar('\n');
    }
    
}
