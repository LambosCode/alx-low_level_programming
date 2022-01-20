#include "main.h"

/**
 * clear_bit - at a particular index change bit to 1
 * @n: value to be converted
 * @index: counts bits
 *
 * Return: formated n
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);

	return ((int)*n);
}
