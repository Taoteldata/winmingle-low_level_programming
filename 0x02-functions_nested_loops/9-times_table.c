#include "main.h"
/*Writing a function that prints the 9 times table, starting with 0.
 *
 *
 * Author: Taofeek Abdulrokeeb A.
 * Winmingle Community
 */
void times_table(void)
{
	int row;
	int colum;
	int result;

	for(row = 0; row <= 9; row++) {
	for(colum = 0; colum <= 9; colum++) {
	
		result = row * colum;

		if (colum != 0) {
		_putchar(',');
		_putchar(' ');

		if (result < 10)
			_putchar(' ');
		} 
		if (result >= 10) {

			_putchar((result / 10) + '0');
		}
		_putchar((result % 10) + '0');
	}

		_putchar('\n');
	}
	
}

