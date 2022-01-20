#include "main.h"
/**
 * print_alphabet_x10 - Display small letters to screen
 */
void print_alphabet_x10(void)
{
	int l_alpha;
	int count = 0;

	do {
		for (l_alpha = 97; l_alpha <= 122; l_alpha++)
			_putchar(l_alpha);

		_putchar('\n');
		count++;
	} while (count < 10);
}
