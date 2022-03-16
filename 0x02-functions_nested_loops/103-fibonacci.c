#include "main.h"
#include <stdio.h>

/**
 * main - entry program
 *
 * Return: 0 on success
 */

int main(void)
{
	long int i = 0, rslt = 1, x, cnt = 0, eve = 0;

	for (; cnt < 50; cnt++)
	{
		x = rslt;
		rslt += i;
		i = x;
		if (rslt % 2 == 0)
			eve += rslt;
		if (rslt > 4000000)
			break;
	}
	printf("%ld\n", eve);
	return (0);
}
