#include "main.h"
#include <stdio.h>

/**
 * print_array - list array in hierarchical order
 * @a: array in postion
 * @n: array index
 */

void print_array(int *a, int n)
{
	int i = 0, x = n - 1;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < x)
			printf(", ");
	}
	printf("\n");
}
