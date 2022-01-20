#include "main.h"

/**
 * reverse_array - change order of values of array
 * @a: array to be modified
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;
	int x = n / 2;

	if (n <= 0)
		return;

	if ((n % 2) == 0)
	{
		n--;
		for (; i < x; n--, i++)
		{
			tmp = a[i];
			a[i] = a[n];
			a[n] = tmp;
		}
	}
	else
	{
		n--;
		x--;
		for (; i <= x; n--, i++)
		{
			tmp = a[i];
			a[i] = a[n];
			a[n] = tmp;
		}
	}
}
