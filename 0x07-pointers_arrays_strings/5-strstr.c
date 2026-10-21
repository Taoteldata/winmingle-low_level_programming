#include <stdio.h>
#include "main.h"

/**
 * writing a function that locates substring needle in haystack
 * strstr(): 
 * char *: this char * at the begining means that the function returns a pointer to the matching character or NULL if *         there is no match
 * char *haystack: a pointer parameter to the string you want to search
 * char *needle: the string we are looking for
 * Return: return pointer to the first occurence or NULL
 *
**/

char *_strstr(char *haystack, char *needle)
{
    unsigned int i, j;
    
    if(*needle == '\0')
        {
            return(haystack);
        }

    for(i = 0; haystack[i] != '\0'; i++)
    {
        for(j = 0; needle[j] != '\0'; j++)
        {
             if (haystack[i + j] == '\0' || haystack[i + j] != needle[j])
                {
                    break;
                }
        }
    
        if(needle[j] == '\0')
            {
                return(&haystack[i]);
            }
    }
        return(NULL);
}

/* return(&s[i]) is the same thing as return(s + i) */
