#include "main.h"
#include <stdio.h>

/**
 * writing a function that prints a square on the terminal..
 *
 */
void print_square(int size)
{
	int i = 0;

	if(size <= 0)
	{
		_putchar('\n');

		return;
	}

	while (i < size)
	{
		int j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
