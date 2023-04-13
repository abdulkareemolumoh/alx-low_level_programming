#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D array of integers.
 * @grid: Pointer to the 2D array.
 * @height: Height of the grid.
 *
 * Return: None.
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

