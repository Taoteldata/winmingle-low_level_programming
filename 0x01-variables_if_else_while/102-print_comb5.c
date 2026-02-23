#include <stdio.h>
#include <stdlib.h>
/** Author: Taofeek Abdulrokeeb A.
 * Program: WinMingle Community C Training
 * Description: Writing program that prints combination of two digits.
 */
int main (void)
{
    int first_digit = '0';
	int second_digit;

	while (first_digit <= 98)
	{
		second_digit = first_digit + 1;

		while ( second_digit <= 99)
	{
		putchar ((first_digit / 10) + '0');	
 		putchar ((first_digit % 10) + '0');	
		putchar (' ');
		putchar ((second_digit / 10) + '0');	
		putchar ((second_digit % 10) + '0');	
	
	if (!(first_digit == 98 && second_digit == 99))
	{
		putchar (',');
		putchar (' ');
	}
	
	second_digit++;	

	}

	first_digit++;
}

	putchar ('\n');

    return (0);
}/* To build a program with puts */
