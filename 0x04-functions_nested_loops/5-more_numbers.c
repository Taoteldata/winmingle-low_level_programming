#include "main.h"
#include <stdio.h>

/**
 * writing a function that prints number from 0 to 14 ten times followed by new line.
 *
 */
void more_numbers(void)
{
	int count = 0;
	while (count < 10) //counting (10 times)
	{
		int i = 0;
		while (i <= 14) //numbers 0 to 14
		{
			if( i >= 10 )
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		
		_putchar('\n');
		count++;
	}
}

