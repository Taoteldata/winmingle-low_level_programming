#include <stdio.h>
#include "main.h"

/*
 * Function: a function that encodes a string using rot13.
 *
 *
*/
char *rot13(char *s)
{
   int i;
   int j;

   char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
   
   for(i = 0; s[i] != '\0'; i++)
   {
        for(j = 0; letters[j] != '\0'; j++)
        {
            if(s[i] == letters[j])
            {
                 s[i] = encoded[j];
                 break;
            }
        }
   }
   return(s);
}
