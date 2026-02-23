#include <stdio.h>
#include <stdlib.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that prints the alphabet in lower case,except letters q and e.
 */
int main (void)
{
    char x = 'a';
	while (x <= 'z') {
		if (x != 'e' && x != 'q')
		putchar (x);
		x++;
	}

	putchar('\n');

    return (0);
}/* To build a program with puts */
