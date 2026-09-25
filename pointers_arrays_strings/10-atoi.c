#include <stdio.h>
#include "main.h"

/** function that converts a string to an integer */

int _atoi(char *s)
{
    int i = 0;
    int result = 0;
    int sign = 1;

/** This will handle the negative integers */
    while(s[i] == '-')
    {
        sign = sign * -1;
        i++;
    }

/** This handles the integers */

    while(s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return (result * sign);
}
