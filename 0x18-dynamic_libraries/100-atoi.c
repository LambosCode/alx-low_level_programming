#include "main.h"
/**
 * _atoi - convert string numbers to integers noting the negative sign
 * @s: string stored
 * Return: converted string of numbers
 */

int _atoi(char *s)
{
	int x = 1, unit = 10;

	while (s)
	{
		if (*s == 0)
			return (0);

		if (*s == 45)
		{
			x *= -1;
			s++;
		}

		if (*s >= 48 && *s <= 57)
		{
			x *= (*s - 48);
again:
			if (s[1] >= 48 && s[1] <= 57)
			{
				s++;
				x *= unit;
				if (x > 0)
					x += (*s - 48);
				else
					x += ((*s - 48) * -1);
				goto again;
			}
			else
				return (x);
		}
		if (*s != 45)
			s++;
	}
	return (0);
}
