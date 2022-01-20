#include "function_pointers.h"

/**
 * array_iterator - pass array data into function
 *
 * @array: container of int
 *
 * @size: size of array
 *
 * @action: function accepting array data
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!array || (int)size <= 0)
		return;

	for (; i < (int)size; i++)
		(*action)(array[i]);
}
