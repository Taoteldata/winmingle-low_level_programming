#include "main.h"
#include <stdio.h>
/*Writing a program that prints _putchar, followed by a new line.
 * Author: Taofeek Abdulrokeeb A.
 * Winmingle Community
 */
int main (void) {
	int i = 0;
	char c;
	char a[] = "_putchar";

	while (i <= 8) {
	    c = a[i];
		_putchar(c);
		
		i++;
	}
		
		_putchar('\n');

	return 0;
}
