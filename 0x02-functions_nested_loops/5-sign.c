#include "main.h"
/*Writing a function that the sign of a number.
 * Author: Taofeek Abdulrokeeb A.
 * Winmingle Community
 */
int print_sign(int n) {

	if (n > 0)
	{
		_putchar('+');
		return 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		return 0;
	}
	else
	{
		_putchar('-');
		return -1;
	}
}
