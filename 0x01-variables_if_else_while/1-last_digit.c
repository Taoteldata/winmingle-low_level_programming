#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that prints the last digit of a random number
 */
int main (void)
{
    int n;
	int last_digit;
	srand(time(0));

	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
		printf("last digit of %i and %i is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("last digit of %i and %i is 0\n", n, last_digit);
	else if (last_digit < 6)
		printf("last digit of %i and %i is less than 6 and not 0\n", n, last_digit);

    return (0);
}/* To build a program with puts */
