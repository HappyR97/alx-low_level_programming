#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - Returns a pointer to a 2D array of ints
 * @width: Array width
 * @height: Array height
 *
 * Return: Pointer to 2D array if success, NULL if fail
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (k = 0; k < width; k++)
			grid[i][k] = 0;
	}
	return (grid);
}
