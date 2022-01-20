#include "main.h"

/**
 * print_diagonal - print stroke
 * @n: number of space end with stroke
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar(10);
		return;
	}

	while (i <= n)
	{
		if (i > 0)
		{
			int x = 1;

			for (; x < i; x++)
				_putchar(32);
			_putchar(92);
			_putchar(10);
		}
		i++;
	}
}
