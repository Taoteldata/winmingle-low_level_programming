#include "main.h"
#include <stdio.h>
/*Writing a function that prints all natural numbers from n to 98, followed by a new line.
 *
 * Author: Taofeek Abdulrokeeb A.
 * Winmingle Community
 */
void print_to_98(int n)
{
	if (n <= 98) 
	{

	for(n = 0; n < 98; n++) {
		printf("%d, " , n);
	}
	}
	else 
	{
		for(n = 0; n > 98; n--)
			printf("%d, " , n);
	}
	printf("98\n");
}

