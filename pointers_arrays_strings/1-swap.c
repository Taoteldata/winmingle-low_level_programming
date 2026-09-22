#include <stdio.h>
#include "main.h"

/** Writing a function that swaps the values of two integers **/

void swap_int(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
