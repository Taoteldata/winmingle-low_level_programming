#include <stdio.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that prints all the number base 16 in lowercase.
 */
int main (void)
{
	//printing the number
    int x = '0';
	while (x<='9') {
		putchar (x);
		x++;
	}
	//printing the letters
	char c = 'a';
	while (c <= 'f') {
		putchar (c);
		c++;
	}

	putchar('\n');

    return (0);
}/* To build a program with puts */
