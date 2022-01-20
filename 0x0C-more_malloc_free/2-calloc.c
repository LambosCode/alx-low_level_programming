#include "main.h"

/**
 * _calloc - allocates fix amounts into memory
 * @nmemb: amount of memory
 * @size: individual byte in memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (0);
	if (!ptr)
		return (0);
	return (ptr);
}
