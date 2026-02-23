#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that assigns random number to a variable
 */
int main (void)
{
    int n;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("%i is positive\n", n);
	else if (n<0)
		printf("%i is negative\n", n);
	else 
		printf("%i is zero\n", n);

    return (0);
}
