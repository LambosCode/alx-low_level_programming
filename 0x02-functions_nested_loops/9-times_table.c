#include "main.h"

/**
 * times_table - multiplication table from 0 to 9
 */
int main(void)
{
    times_table();
    return (0);
}
void times_table(void)
{
	int x = 0, y = 0, rslt;

	for (; x < 10; y++)
	{
		if (y == 10)
		{
			x++;
			y = 0;
			_putchar(10);
		}

		if (x == 10)
			break;

		rslt = x * y;

		if (rslt >= 10)
		{
			_putchar((rslt / 10) + 48);
			_putchar((rslt % 10) + 48);
		}
		else if (y == 0)
			_putchar(rslt + 48);
		else
		{
			_putchar(32);
			_putchar(rslt + 48);
		}

		if (y < 9)
		{
			_putchar(44);
			_putchar(32);
		}
	}
}
