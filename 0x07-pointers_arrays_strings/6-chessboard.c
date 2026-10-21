#include <stdio.h>
#include "main.h"

/**
  * Function : prints 8x8 chessboard from char board[8][8]
  * void : the function does not return value
  * (*a)[8] : this is a pointer to an array of a row with 8 characters
  *
 */

 void print_chessboard(char (*a)[8])
 {
    unsigned int i, j;
    for(i = 0; i < 8; i++)
        {
            for(j = 0; j < 8; j++)
                {
                    _putchar(a[i][j]);
                }


            _putchar('\n');
        }
 }
