#include <stdio.h>
#include "main.h"

/** writing a function that reverses a string */

void rev_string(char *s)
{
    int i = 0;

    while(s[i] != '\0')
    {
        _putchar(s[i]);
        i++;
    }
      _putchar('\n');

    while(i >= 0)
    {
        _putchar(s[i]);
        i--;
    }
        _putchar('\n');
}
