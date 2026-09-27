#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** Writing a program that generates password / key that a crackme can accept */

int main(void)
{
    char password[7];
    int i;
    int sum;

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        password[i] = rand() % 78 + 48;
        sum += password[i];
    }

    password[6] = 2772 - sum;

    for (i = 0; i < 7; i++)
    {
        putchar(password[i]);
    }

    putchar('\n');

    return (0);
}
