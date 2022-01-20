#include "main.h"
void cm_spc(int n);
void prnt_dgt(int n);
void prnt_dgt3(int n);

/**
 * print_to_98 - print numbers starting from n
 * @n: start point to count
 */

void print_to_98(int n)
{
	int x;

	for ( ; n > 98; n--)
	{
		if (n > 99)
			prnt_dgt3(n);
		else
			prnt_dgt(n);
		cm_spc(n);
	}

	for (; n <= 98; n++)
	{
		if (n < 0)
		{
			x = n * -1;
			_putchar('-');
			if (x > 99)
				prnt_dgt3(x);
			else if (x > 9)
				prnt_dgt(x);
			else
				_putchar((x % 10) + 48);
			cm_spc(n);
		}
		if (n >= 0)
		{
			if (n < 10)
				_putchar((n % 10) + 48);
			else
				prnt_dgt(n);
			cm_spc(n);
		}
	}
	_putchar(10);
}

/**
 * cm_spc - prints comma and space
 * @n: continues to print before last value of n
 */

void cm_spc(int n)
{
	if (n != 98)
	{
		_putchar(44);
		_putchar(32);
	}

}

/**
 * prnt_dgt - prints individual digits to output
 * @n: value to be printed
 */

void prnt_dgt(int n)
{
	_putchar((n / 10) + 48);
	_putchar((n % 10) + 48);
}

/**
 * prnt_dgt3 - prints upto three digits number
 * @n: starts from number specified by n
 */

void prnt_dgt3(int n)
{
	_putchar((n / 100) + 48);
	_putchar(((n / 10) % 10) + 48);
	_putchar((n % 10) + 48);

}
