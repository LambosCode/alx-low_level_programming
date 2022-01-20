#include "main.h"

/**
 * _abs - checks for absoloute value
 * @i:  accepts parameter for absolute value from user
 * Return: value of absolute value is print to screen
 */

int _abs(int i)
{
	if (i < 0)
		i *= -1;

	return (i);
}
