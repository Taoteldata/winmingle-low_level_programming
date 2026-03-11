#include "main.h"
/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	int a = 972;
	int b = -95;
	int c = 0;
	int largest;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);
	return (0);
}
