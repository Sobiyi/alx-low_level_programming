#include "main.h"

/**
 * free_grid - fress a 2 dimensional grid
 * @grid: pointer to grid
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
