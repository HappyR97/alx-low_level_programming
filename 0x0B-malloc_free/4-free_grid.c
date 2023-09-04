#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees 2 dimensional grid previously created
 * @grid: Array of pointers
 * @height: height of 2D array
 *
 * Return: Always void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
