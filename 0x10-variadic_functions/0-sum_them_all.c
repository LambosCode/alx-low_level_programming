#include "variadic_functions.h"

/**
 * sum_them_all - add up variadic arguements
 *
 * @n: numbers to sum
 *
 * Return: added sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = n, x = 0;
	va_list arr;

	if (n == 0)
		return (0);
	va_start(arr, n);
	while (i > 0)
	{
		x += va_arg(arr, int);
		i--;
	}
	return (x);
}
