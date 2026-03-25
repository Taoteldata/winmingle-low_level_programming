#include "main.h"
#include <stdio.h>

/**
 * writing a function that draws a diagonal line on the terminal..
 *
 */
void print_diagonal(int n)
{
	int i = 0;

	if(n <= 0)
	{
		_putchar('\n');

		return;
	}

	while (i < n)
	{
		int j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		i++;
	
	_putchar('\n');
	}
}
