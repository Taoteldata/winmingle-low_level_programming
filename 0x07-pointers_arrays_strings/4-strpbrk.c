#include <stdio.h>
#include "main.h"

/**
 * writing a function that finds the first occurence in a string of any bytes in accept
 * strpbrk(): 
 * char *: this char * at the begining means that the function returns a pointer to the matching character or NULL if *         there is no match
 * char *s: a pointer parameter to the string you want to search
 * char *accept: the string containing the characters we are looking for
 * Return: return pointer to the first occurence or NULL
 *
**/

char *_strpbrk(char *s, char *accept)
{
    int i, j;

    for(i = 0; s[i] != '\0'; i++)
    {
        for(j = 0; accept[j] != '\0'; j++)
        {
             if (s[i] == accept[j])
                {
                    return(&s[i]);
                }
        }
    }
    
    if(accept[j] == '\0')
    {
        return(s + i);
    }
    else
        return(NULL);
}

/* return(&s[i]) is the same thing as return(s + i) */
