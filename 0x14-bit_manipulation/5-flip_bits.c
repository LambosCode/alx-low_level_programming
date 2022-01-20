#include "main.h"

/**
 * clear_bit - at a particular index change bit to 1
 * @n: value to be converted
 * @m: counts bits
 *
 * Return: formated n
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= (1 << m);

	return ((unsigned int)n);
}
