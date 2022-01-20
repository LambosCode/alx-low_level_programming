#include "main.h"

/**
 * swap_int - changes values of two integers
 * @a: collects first number from user
 * @b: colects second number from user
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
