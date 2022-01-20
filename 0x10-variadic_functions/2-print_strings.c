#include "variadic_functions.h"

/**
 * print_strings - print infinites
 *
 * @separator: sperate by comma
 * @n: number of arguements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *x;
	va_list arr;

	va_start(arr, n);

	while (i > 0)
	{
		x = va_arg(arr, char *);
		if (!x)
			return;

		printf("%s", x);

		if (i > 1)
			printf("%s", separator);
		i--;
	}
	va_end(arr);
	printf("\n");
}
