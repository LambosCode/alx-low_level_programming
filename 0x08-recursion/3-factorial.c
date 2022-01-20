#include "main.h"

/**
 * factorial - calculates the multiple numbers in decrements
 * @n: number factored
 * Return: stack of recursived multiplication
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	return (-1);
}
