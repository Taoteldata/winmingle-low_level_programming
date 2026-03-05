#include <stdio.h>
/**Writing a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * 
 *
 * Author: Taofeek Abdulrokeeb A.
 * School: Winmingle Community
 *
 */
int main (void) 
{
	unsigned long a_low = 1, b_low = 2;
	unsigned long a_high = 0, b_high = 0;
	unsigned long next_low, next_high;
	unsigned long carry;
	int count;

	printf("1, 2");

	for(count = 3; count <= 98; count++)
	{
		next_low = a_low + b_low;
		carry = next_low / 10000000000;
		next_low = next_low % 10000000000;
		next_high = a_high + b_high + carry;

		printf(", ");

		if (next_high > 0)
		{
			printf("%lu%010lu", next_high, next_low);
		}

		else
		{
			printf("%lu", next_low);
		}

		a_low = b_low;
		a_high = b_high;

		b_low = next_low;
		b_high = next_high;
	}

	printf("\n");

	return (0);

}


