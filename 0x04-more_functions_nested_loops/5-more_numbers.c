#include <stdio.h>
#include "main.h"

/** Writing a function that prints 10 times the  numbers from 0 to 14 followed by newline **/

void more_numbers(void){

    int i = 0;
    int n;
    while (i <= 9)
    {
    for(n = 0; n <= 14; n++)
         {
            if (n > 9) {
                 _putchar('1');
          }

        _putchar('0' + n % 10);

    }
        _putchar('\n');
        i++;
    }
    
}
