#include "main.h"

/**
 * free_grid - free allocated grid
 * @grid: matrix or grid to be freed
 * @height: height of grid to be freed
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (!grid)
		return;

	while (i <= height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
