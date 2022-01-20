#include "function_pointers.h"

/**
 * int_index - get index of an array
 *
 * @array: container of int
 *
 * @size: size of container
 *
 * @cmp: function compare strings
 *
 * Return: 1 success, 0 failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || size <= 0)
		return -1;

	for (; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
		else if ((*cmp)(array[i]) == 0 && i == (size - 1))
			return (-1);
	}

	return (0);
}
