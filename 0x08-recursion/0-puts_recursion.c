#include "main.h"

/**
 * _puts_recursion - prints to screen
 * @s: buffer characters
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
