#include "main.h"

void free_grid(int **grid, int height)
{
	int i = 0;

	if (!grid)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
