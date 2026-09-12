#include <stdio.h>

/** Writing a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
 *
 */
 int main(void)
 {
    long int n = 612852475143;
    long int i;
    long int largest = 0;

    for(i = 2; i <= n / i; i++)
    {
        while(n % i == 0)
        {
            largest = i;
            n = n / i;
        }
            
    }
    if(n > 1)
        {
            largest = n;
        }
            printf("%ld\n", largest);


    return (0);
 }
