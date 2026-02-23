#include <stdio.h>
#include <stdlib.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that prints the alphabet in lower case, then capital letter,and new line.
 */
int main (void)
{
    char x = 'a';
	while (x <= 'z') {
		putchar (x);
		x++;
	}
        x ='A';
		while (x <= 'Z') {
			putchar (x);
			x++;
		}

	putchar('\n');

    return (0);
}/* To build a program with puts */
