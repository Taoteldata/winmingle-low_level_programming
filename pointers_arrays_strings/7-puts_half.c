#include <stdio.h>
#include "main.h"

/** writing a function that prints half of a string. */

void puts_half(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
    if(i >= 5)
        {
          _putchar(str[i]);
        }
        i++;
    }
      _putchar('\n');

}
