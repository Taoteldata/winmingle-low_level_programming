#include <stdio.h>
#include <stdlib.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that prints the alphabet in lower case, in reverse order.
 */
int main (void)
{
    char x = 'z';
	while (x >= 'a') {
		putchar (x);
		x--;
	}
	putchar('\n');

    return (0);
}/* To build a program with puts */
