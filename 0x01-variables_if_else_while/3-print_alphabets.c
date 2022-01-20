#include <stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int l_alpha;
	int U_alpha;

	for (l_alpha = 97; l_alpha <= 122; l_alpha++)
	{
	putchar(l_alpha);
	}
	for (U_alpha = 65; U_alpha <= 90; U_alpha++)
	{
	putchar(U_alpha);
	}
	putchar(10);
	return (0);
}
