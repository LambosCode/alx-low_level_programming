#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	int num;

	for (num = 0; num <= 99; i++, num++)
	{
	putchar((num / 10) + '0');
	putchar((num % 10) + '0');
	if (i == 99)
	{
	break;
	}
	putchar(44);
	putchar(32);
	}
	putchar(10);
	return (0);
}
