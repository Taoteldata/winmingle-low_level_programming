#include <stdio.h>
#include "main.h"

/**
  * Function : the function calculates and prints the sum of the main and secondary diagonal of the square matrix
  * void : the function does not return value
  * int *a : a pointer to the first element of the matrix
  * int size: the numbers of rows and colums in the square matrix
  *
 */

 void print_diagsums(int *a, int size)
 {
    int i, sum1 = 0, sum2 = 0;
    for(i = 0; i < size; i++)
        {
            sum1 += a[i * size + i];
        }

    for(i = 0; i < size; i++)
        {
            sum2 += a[i * size +(size -1 -i)];
        }

    printf("%d, %d\n", sum1, sum2);
 }
