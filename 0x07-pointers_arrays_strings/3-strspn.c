#include <stdio.h>
#include "main.h"

/**
 * writing a function that locates a character and returns the pointer
 * strspn(): 
 * unsigned int: the function returns an integer
 * char *s: a pointer parameter to the string you want to examine
 * char *accept: the characters characters that are allowed
 * Return: stop at the character that does not belong to the accepted characters and return the count.
 *
**/

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = 0; accept[j] != '\0'; j++)
        {
            if(s[i] == accept[j])
            {
                break;
            }
        }
    
            if(accept[j] == '\0')
               {
                  return(i);
               }
    }

    return(i);
}
