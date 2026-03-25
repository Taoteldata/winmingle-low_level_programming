#include "main.h"
#include <stdio.h>

/**
 * writing a function that prints numbers from 0 to 9 and followed by new line..
 *
 */
void print_numbers(void)
{
	char c = '0';

	//while loop
	
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

