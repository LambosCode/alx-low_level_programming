#include "main.h"
void prt_dgt(int rslt, int y);

/**
 * print_times_table - multiplication table from 0 to n value
 * @n: value to be passed in multiplication function
 */

void print_times_table(int n)
{
	int x = 0, y = 0, rslt;

	for (; n >= 0 && x <= n && n <= 15; y++)
	{
		if (y == (n + 1))
		{
			x++;
			y = 0;
			_putchar(10);
		}

		if (x == (n + 1))
			break;

		rslt = x * y;
		prt_dgt(rslt, y);

		if (y < n)
		{
			_putchar(44);
			_putchar(32);
		}
	}
}

/**
 * prt_dgt - output multiplication to screen
 * @rslt: value multiplied
 * @y: check variable of product to be zero
 */

void prt_dgt(int rslt, int y)
{
		if (rslt > 99)
		{
			_putchar((rslt / 100) + 48);
			_putchar(((rslt / 10) % 10) + 48);
			_putchar((rslt % 10) + 48);

		}
		else if (rslt >= 10)
		{
			_putchar(32);
			_putchar((rslt / 10) + 48);
			_putchar((rslt % 10) + 48);
		}
		else if (y == 0)
			_putchar(rslt + 48);
		else
		{
			_putchar(32);
			_putchar(32);
			_putchar(rslt + 48);
		}
}
