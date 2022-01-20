#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n1 = 48, n2 = n1;

	while (n2 < 57)
	{
		putchar(n1);
		n2++;
		putchar(n2);

		if (n1 != '8')
		{
			putchar(',');
			putchar(' ');

		if (n2 == '9')
		{
			n1++;
			n2 = n1;
		}
		}
	}
	putchar(10);
	return (0);
}
