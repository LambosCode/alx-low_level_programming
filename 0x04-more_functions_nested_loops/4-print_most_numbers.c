#include "main.h"

/**
 * print_most_numbers - skips 2 and 4
 */

void print_most_numbers(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			i++;
		_putchar(i);
	}
	_putchar(10);
}
