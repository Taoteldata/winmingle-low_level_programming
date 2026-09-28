#include <stdio.h>
#include "main.h"

/** Writing a function that concatenates two strings */

char *_strcat(char *dest, char *src)
{
    int i = 0;

    while(src[i] == '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
