#include <stdio.h>
/**Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 *
 * Author: Taofeek Abdulrokeeb A.
 * School: Winmingle Community
 *
 */
int main (void) 
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long next;
	int count;
	
		printf("%lu, %lu", a, b);

	for(count = 3; count <= 50; count++) {

		next = a + b;
		printf(", %lu", next);

		a = b;
		b = next;
		}
			printf("\n");

			return 0;
}

