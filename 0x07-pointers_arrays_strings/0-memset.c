#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * writing a function that fills memory with a constant bytes
 * memset(): recreates the behaviour of the standard C library function
 * char *s: pointer parameter pointing to the memory we want to modify
 * char b: the value we want to fill into the memory
 * unsigned int n: n parameter is the numbers of value to modify
 * return type : a pointer to the begining of the memory area.
 *
**/

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return(s);
}
