#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n1 = 48, n2 = n1 + 1, n3 = n2;

	while (n1 < 56)
	{
		putchar(n1);
		putchar(n2);
		n3++;
		putchar(n3);

		if (n1 != 55)
		{
			putchar(44);
			putchar(32);
		}

		if (n2 > 55)
		{
			n1++;
			n2 = n1 + 1;
			n3 = n2;
		}

		if (n3 > 56)
		{
			n2++;
			n3 = n2;
		}
	}
	putchar(10);
	return (0);
}nt main(void)
{
	int n1 = 48, n2 = n1 + 1, n3 = n2;

	while (n1 < 56)
	{
		putchar(n1);
		putchar(n2);
		n3++;
		putchar(n3);

		if (n1 != 55)
		{
			putchar(44);
			putchar(32);
		}

		if (n2 > 55)
		{
			n1++;
			n2 = n1 + 1;
			n3 = n2;
		}

		if (n3 > 56)
		{
			n2++;
			n3 = n2;
		}
	}
	putchar(10);
	return (0);
}
