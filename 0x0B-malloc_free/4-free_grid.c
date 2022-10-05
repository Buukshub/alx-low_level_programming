#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memory allocate for the gridcreated by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 * Return: clean up memory
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (y = 0; y < height;  y++)
	{
		free(grid[y]);
	}
	free(grid);
}
