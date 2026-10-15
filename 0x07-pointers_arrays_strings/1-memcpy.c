#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * writing a function that copies specified number of bytes from one memory area to another
 * memcpy(): 
 * char *: this char * at the begining means that the function returns a pointer to a character
 * char *dest: pointer parameter pointing to the destination we are copying to
 * char *src: pointer parameter pointing to the source we are copying from
 * unsigned int size: n parameter is the numbers of value to modify
 *
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    for(i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return(dest);
}
