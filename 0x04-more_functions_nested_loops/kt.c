#include <time.h>
#include <stdio.h>

int main(void)
{
	clock_t times = clock();
	int i = 10;

	for (int x = 0; x < i; x++)
	{
		printf("clock :%ld\n", times);
		times = clock();
	}
	return (0);
}
