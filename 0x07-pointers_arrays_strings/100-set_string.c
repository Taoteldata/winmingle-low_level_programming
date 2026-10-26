#include <stdio.h>
#include "main.h"

/**
 * set_string() : a function that changes where a character pointer point to
 * char **s : the address of a character pointer that you want to change
 * char *to : a pointer to the string the character pointer should point to
 * return type : void
 *
**/

void set_string(char **s, char *to)
{
    *s = to;

}
