#include "main.h"
#include <stdio.h>

/**
*  Writing a main function that check uppercase character
*  Return Always 0
*  
*/

int main(void) {
    char c = 'A';

    printf("%c : %d\n", c, _isupper(c));

    c = 'a';
    printf("%c : %d\n", c, _isupper(c));

    return (0);

}
