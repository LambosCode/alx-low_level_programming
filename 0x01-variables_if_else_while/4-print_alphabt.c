#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int l_alpha;

	for (l_alpha = 97; l_alpha <= 122; l_alpha++)
	{
	if (l_alpha == 101 && l_alpha == 113)
	{
	l_alpha++;
	}
	putchar(l_alpha);
	}
	putchar(10);
	return (0);
}
