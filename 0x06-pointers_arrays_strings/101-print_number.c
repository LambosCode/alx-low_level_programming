#include "main.h"

/**
 * print_number - prints all valid numbers of int
 * @n: integer value
 *
 */

void print_number(int n)
{
	int x, len = _int_len(n);
	int i_sqrd = _int_sqr(10, len);

	if ((n < 10) && (n >= 0))
		_putchar(n + 48);
	else
	{
		if ((n < 0) && (n > -10))
		{
			_putchar(45);
			n *= (-1);
			_putchar(n + 48);
		}
		else if (n <= -10)
		{
			_putchar(45);
			n *= (-1);
			for (; len != 0; len--, i_sqrd /= 10)
			{
				x = (n % i_sqrd) / (i_sqrd / 10);
				_putchar(x + 48);
			}
		}
		else
		{
			for (; len != 0; len--, i_sqrd /= 10)
			{
				x = (n % i_sqrd) / (i_sqrd / 10);
				_putchar(x + 48);
			}
		}
	}
}

/**
 * _int_len - get length of an integer
 * @i: integer value
 *
 * Return: length on success
 */

int _int_len(int i)
{
	int cnt = 0;

	if (i < 0)
		i *= (-1);

	while (i != 0)
	{
		i /= 10;
		cnt++;
	}
	return (cnt);
}

/**
 * _int_sqr - square any number
 * @x: no to be suared
 * @y: how many time should x multiply itself
 *
 * Return: recursively squares
 */

int _int_sqr(int x, int y)
{
	if (x == 0)
		return (0);
	if (y < 0)
		return (-1);
	if (y == 0 || x == 1)
		return (1);
	if (y == 1)
		return (x);

	x = x * _int_sqr(x, (y = y - 1));

	return (x);
}
