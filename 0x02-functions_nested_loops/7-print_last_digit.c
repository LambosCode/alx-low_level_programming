#include "main.h"

/**
 * print_last_digit - checks for last digit of a given number
 * @a: number to be checked
 * Return: last number
 */
int print_last_digit(int a)
{
	int x;

	x = a % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
