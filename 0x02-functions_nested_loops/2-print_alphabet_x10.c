#include "main.h"
/*Writing a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Author: Taofeek Abdulrokeeb A.
 * Winmingle Community
 */
void print_alphabet_x10(void) {

		int i;
		char x;

		for (i = 0; i < 10; i++){
			
		for(x = 'a'; x <= 'z'; x++){

			_putchar(x);
		}
		_putchar('\n');
		}
}
