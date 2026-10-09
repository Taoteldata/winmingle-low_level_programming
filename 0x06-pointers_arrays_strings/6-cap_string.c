#include <stdio.h>
#include "main.h"

/*
 * Function: a function that capitalises all words of a string
 *
 *
*/
char *cap_string(char *str)
{
   int i;
   int j;
   char separators[] = " \t\n,;.!?\"(){}";

   for(i = 0; str[i] != '\0'; i++)
   {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
        if(i == 0)
            {
              str[i] = str[i] - 32;
            }
        else
        {
             for(j = 0; separators[j] != '\0'; j++)
             {
                if(str[i - 1] == separators[j])
                {
                    str[i] = str[i] -32;
                }
             }
        }
        }
   }
   return(str);
}
