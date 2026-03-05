#include "main.h"
/*Writing a function that checks for alphabetic characters.
 *
 *
 * Author: Taofeek Abdulrokeeb A.
 * Winmingle Community
 */
int _isalpha(int c) {

	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;

}
