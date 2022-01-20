#include "main.h"

/**
 * alloc_grid - create 2-dimensional array via pointer
 * @width: column of values
 * @height: row of values
 * Return: a double pointer, since it behaves like 2d array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **arr_ptr;

	arr_ptr = malloc(sizeof(int *) * (height + 1));
	height--;

	if (height <= 0 || width <= 0 || !arr_ptr)
		return (0);

	while (height > -1)
	{
		arr_ptr[height] = malloc(sizeof(int) * width);

		for (; i < width; i++)
			arr_ptr[height][i] = 0;
		i = 0;
		height--;
	}
	if (!arr_ptr)
		return (0);

	return (arr_ptr);
}
