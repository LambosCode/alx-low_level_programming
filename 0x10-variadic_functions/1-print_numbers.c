#include "variadic_functions.h"

/**
 * print_numbers - print infinites
 *
 * @separator: sperate by comma
 * @n: number of arguements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = 0, i = n;
	va_list arr;

	va_start(arr, n);

	while (i > 0)
	{
		x = va_arg(arr, int);
		printf("%d", x);

		if (i > 1)
			printf("%s", separator);
		i--;
	}
	va_end(arr);
	printf("\n");
}
