#include <stdio.h>

/**
 * Writing a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
 *
 */
int main (void)
{
	long n = 612852475143;
	long factor = 2;

	while (n % 2 == 0)
	{
		factor = 2;
		n /= 2;
	}

	factor = 3;
	while ( n > 1)
	{
		if ( n % factor == 0)
		{
			n /= factor;
		}

		else 
		{
			factor += 2;
		}

	}
	
	printf("%ld\n" , factor);
	return (0);

}
