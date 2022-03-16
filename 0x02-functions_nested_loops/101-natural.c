#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int x = 1024, i = 1, rslt = 0;

	for (; i < x; i++)
		if (i % 3 == 0|| i % 5 == 0)
			rslt += i;
	printf("%d\n", rslt);

	return (0);
}
