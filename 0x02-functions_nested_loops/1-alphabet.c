#include "main.h"

/**
 * print_alphabet - Display small letters to screen
 */

void print_alphabet(void)
{
	int l_alpha;

	for (l_alpha = 97; l_alpha <= 122; l_alpha++)
		_putchar(l_alpha);

	_putchar(10);
}

