#include "main.h"

int main(void)
{
    char src[] = "First, solve the problem. Then, write the code";
    char dest[60];
    int i;

    _strcpy(dest, src);

    i = 0;
    while(dest[i] != '\0')
    {
        src[i] = dest[i];
        _putchar(dest[i]);
        i++;
    }

    _putchar('\n');

    return (0);
}
