#include "main.h"

/**
 * _print_rev_recursion - reverse strings
 * @s: buffer string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
