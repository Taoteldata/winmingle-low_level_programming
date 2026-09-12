#include <stdio.h>
#include "main.h"

/** writing a function that print a triangle in the terminal, followed by new line **/

void print_triangle(int size)
{
    int i;
    int j;

    if(size <= 0)
    {
        return;
    }

    for(i = 0; i < size; i++)
    {
        
    for(j = 0; j < i; j++)
    {
        _putchar('#');
    }
        _putchar(' ');
        _putchar('\n');
    }
    
}
