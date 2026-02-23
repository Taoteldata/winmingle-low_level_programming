#include <stdio.h>
#include <stdlib.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that prints all combination of single digits seprated with comma and space.
 */
int main (void)
{
    int x = '0';
	while (x <= '9') {
		putchar (x);
	
	if (x != '9')
	{
		putchar (',');
		putchar (' ');
	}
	x++;	

	}

	putchar ('\n');

    return (0);
}/* To build a program with puts */
