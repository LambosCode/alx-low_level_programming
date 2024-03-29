#include "main.h"

/**
 * malloc_checked - create memory allocation in heap
 * @b: size
 *
 * Return: memory address
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
