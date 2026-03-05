#include "main.h"
/*Writing a function that prints the last digit of a number.
 *
 * Author: Taofeek Abdulrokeeb A.
 * Winmingle Community
 */
int print_last_digit(int x) 
{
	int last_digit;
	last_digit = x % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	{
		_putchar(last_digit + '0');
	}
		return (last_digit);
}
