#include <stdio.h>
#include "main.h"

/** writing a function that prints every other of a string, starting with the first one */

void puts2(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(i % 2 == 0)
        {
          _putchar(str[i]);
        }
        i++;
    }
      _putchar('\n');

}
