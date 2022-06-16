#include "main.h"

/**
 * _isdigit - prints digits
 * @c: ascii number to check
 * Return: 1 for true, 0 for false
 */

int _isdigit(int c)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
