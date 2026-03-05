#include "main.h"
/*Writing a function that checks for lowercase character.
 *
 * Author: Taofeek Abdulrokeeb A.
 * Winmingle Community
 */
int _islower(int c) {

	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;

}
