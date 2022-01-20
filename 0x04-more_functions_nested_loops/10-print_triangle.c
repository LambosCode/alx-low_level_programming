#include "main.h"

/**
 * print_triangle - prints triangle to screen made of a particular character
 * @size: size of triangle
 *
 */

void print_triangle(int size)
{
	int i = 0, x = size;
	int y = 0, J = 0;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (; x >= i; )
	{
		if (x > 1 && x != 1)
			_putchar(32);
		i++;
		if ((i + 1) == x)
		{
			J = size - i;
			y = 0;

			for (; y < J; y++)
				_putchar(35);
			i = 0;
			x = size - y;
			_putchar(10);
		}
		if (x == 1)
		{
			for (i = 0; i < size; i++)
				_putchar(35);
			_putchar(10);
			return;
		}
	}
}
