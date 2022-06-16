#include "main.h"

/**
 * _islower - checks for lowwer and prints error if negative.
 * @c: accepts both signed and unsigned integer to correspond to ascii
 *
 * Return: with 1 prints stderr, with 0 run successfully
 */

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
