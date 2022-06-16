#include "main.h"

/**
 * _memset- print address of memory
 * @s: strings of character
 * @b: a single character
 * @n: number of n bytes in mempry
 * Return:  string value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
