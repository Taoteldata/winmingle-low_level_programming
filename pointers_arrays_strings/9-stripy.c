#include <stdio.h>
#include "main.h"

/** Writing a function that copies a string from src to dest.
 *
 *  Return : dest
 */

 char *_strcpy(char *dest, char *src)
 {
    int i = 0;

/** Copy src[i] into dest[i] */
    while(src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }

/** copying the null terminator */
    dest[i] = '\0';    
    return (dest);
 }
