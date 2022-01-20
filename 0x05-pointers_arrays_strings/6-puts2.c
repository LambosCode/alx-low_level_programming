#include "main.h"

/**
 * puts2 - jump a rope on string
 * @str: collect strings
 */

void puts2(char *str)
{
	int length = 0, count = 0;

	while (str[length] != '\0')
		length++;

	for (; count <= length; count++)
	{
		if (str[count] == '\0')
			break;
		if (count % 2 == 0)
			_putchar(str[count]);
	}
	_putchar(10);
}
