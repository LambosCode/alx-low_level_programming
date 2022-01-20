#include "main.h"

/**
 * create_array - how to dynamically allocate array
 * @size: size of array, measured by malloc
 * @c: constant character
 * Return: returns pointer behaving like an array
 */

char *create_array(unsigned int size, char c)
{
	char *cc = malloc(sizeof(*cc) * size);

	if (size == 0 || !cc)
		return (NULL);
	size--;

	for (; size > 0; size--)
		cc[size] = c;

	cc[0] = c;

	return (cc);
}
