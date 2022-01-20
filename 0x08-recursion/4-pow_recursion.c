#include "main.h"

/**
 * _pow_recursion - raise power of a number
 * @x: number to be raised
 * @y: raised how many times
 * Return: power.
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	return (-1);
}
