#include <stdio.h>
#include "main.h"

/**
 * writing a function that locates a character and returns the pointer
 * strchr(): 
 * char *: this char * at the begining means that the function returns a pointer to the matching character or NULL if *         there is no match
 * char *s: a pointer parameter to the string you want to search
 * char c: the character you are looking for
 * Return: return pointer to the first occurence or NULL
 *
**/

char *_strchr(char *s, char c)
{
    while(*s != '\0')
    {
        if (*s == c)
        {
            return(s);
        }
        s++;
    }
    
    if(c == '\0')
    {
        return(s);
    }
    else
        return(NULL);
}
