#include "main.h"

/**
 * get_bit - at a particular get index
 * @n: value to get bit from
 * @index: position of bit
 *
 * Return: bit at position else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = n >> index;

	bit &= 1;

	return (bit);
}
