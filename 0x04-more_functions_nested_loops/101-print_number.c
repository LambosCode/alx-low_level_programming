#include "main.h"

/**
 * print_number - prints all valid numbers of int
 * @n: integer value
 *
 */

void print_number(int n)
{
	int x = 0, len = _int_len(n), cnt;
	int64_t i_sqrd = _int_sqr(10, len), xx = (int64_t)n;

	if ((n < 10) && (n >= 0))
	{
		_putchar(n + 48);
		cnt = 1;
	}
	else
	{
		if ((n < 0) && (n > -10))
		{
			_putchar(45);
			n *= (-1);
			_putchar(n + 48);
			cnt = 2;
		}
		else if (n <= -10)
		{
			_putchar(45);
			xx *= (-1);
			cnt = 1;
			while (len != 0)
				patch_print(&cnt, x, xx, &i_sqrd, &len);
		}
		else
		{
			cnt = 0;
			while (len != 0)
				patch_print(&cnt, x, xx, &i_sqrd, &len);
		}
	}
}

/**
 * patch_print - to work with print numbers
 * @cnt: increment on existing loop - address of cnt
 * @x: integer value to print to screen
 * @n: sum of interger value
 * @i_sqrd: provides squares from print_numbers
 * _int_sqr is used in print_numbers
 * @len: lenght of n - address of len
 *
 */

void patch_print(int *cnt, int x, int64_t n, int64_t *i_sqrd, int *len)
{
	x = (n % *i_sqrd) / (*i_sqrd / 10);
	_putchar(x + 48);
	*i_sqrd = *i_sqrd / 10;
	*len = *len - 1;
	*cnt = *cnt + 1;
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

int64_t _int_sqr(int64_t x, int y)
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
