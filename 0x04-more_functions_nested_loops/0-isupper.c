#include "main.h"

/**
 * _isupper - check for capitalized letter
 * @c: ascii character buffer
 * Return: 1 for true, 0 for false
 */
int _isupper(int c)
{
	int i = 65;

	for (; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
