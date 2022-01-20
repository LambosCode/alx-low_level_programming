#include "main.h"

/**
 * malloc_checked - create memory allocation in heap
 * @b: size
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(b) * b);

	if (!ptr)
		exit(98);

	return (ptr);
}
