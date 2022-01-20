#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	char alpha;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
	putchar(alpha);
	}
	putchar(10);
	return (0);
}
