#include "main.h"

/**
 * print_binary - convert int to binary
 * @n: value to be converted
 *
 */

void print_binary(unsigned long int n)
{
	int cnt = 0, tmp;

	while (n >> cnt != 0)
		cnt++;
	cnt--;
	while (cnt > 0)
	{
		tmp = n >> cnt--;
		tmp = (tmp & 1);
		putchar(tmp + 48);
	}
	tmp = (n & 1);
	putchar(tmp + 48);
}
/**
 * putchar - print a single character
 * @c: int value of char
 *
 * Return: length of char
 */
int putchar(int c)
{
	return (write(1, &c, 1));
}
