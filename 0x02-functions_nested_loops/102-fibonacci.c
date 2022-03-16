#include "main.h"
#include <stdio.h>

int main(void)
{
	long int i = 0, rslt = 1, x, cnt = 0;

	for (; cnt < 50; cnt++)
	{
		x = rslt;
		rslt += i;
		i = x;
		printf("%ld", rslt);
		if (cnt < 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
