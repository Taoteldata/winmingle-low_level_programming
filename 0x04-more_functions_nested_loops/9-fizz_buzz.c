#include <stdio.h>
/**
 * Writing a program that prints the numbers from 1 to 100, followed by a newline. But for multiples of three, print Fizz instead of the number and for multiples of five, print Buzz. For numbers which are both multiples of three and five, print FizzBuzz.
 *
 */
 int main(void)
 {
    int n;
    for(n = 1; n <= 100; n++)
    {

    if(n % 3 == 0)
    {
        printf("Fizz");
    }

    else if(n % 5 == 0)
    {
        printf("Buzz");
    }

    else if(n % 15 == 0)
    {
        printf("FizzBuzz");
    }

    else
        printf("%d ", n);
    }

    printf("\n");
    return (0);
 }
