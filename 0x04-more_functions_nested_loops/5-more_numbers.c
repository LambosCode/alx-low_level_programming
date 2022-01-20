#include "main.h"

/**
 * more_numbers - print numbers 0 - 14 over 10 times
 */

void more_numbers(void)
{
	int x = 0, y = 0;

	while (y < 10)
	{
		for (; x < 15;)
		{
again:
			_putchar((x % 10) + 48);
			x++;
			if (x > 9 && x < 15) /* being careful because this works like a loop*/
			{
				_putchar((x / 10) + 48);
				goto again;
			}
		}
		_putchar(10);
		x = 0;
		y++;
	}
}
