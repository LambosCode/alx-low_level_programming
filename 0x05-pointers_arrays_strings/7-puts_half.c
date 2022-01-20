#include "main.h"

/**
 * puts_half - cut the rope in half on string
 * @str: collect strings
 */

void puts_half(char *str)
{
	int length = 0, half;

	while (str[length] != '\0')
		length++;

	half = length / 2;
	if (length % 2 == 1)
		half++;
	for (; half < length; half++)
	{
		if (str[half] == '\0')
			break;
		_putchar(str[half]);
	}
	_putchar(10);
}
