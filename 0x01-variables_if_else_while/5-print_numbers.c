#include <stdio.h>
#include <stdlib.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that prints all single digit numbers of base 10.
 */
int main (void)
{
    char  x = '0';
	while (x <= '9') {
		putchar (x);
		x++;
	}
	putchar ('\n');

    return (0);
}/* To build a program with puts */
