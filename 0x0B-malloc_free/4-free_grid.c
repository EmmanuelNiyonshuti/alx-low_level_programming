#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: Pointer to the 2D array (grid) to be freed.
 * @height: Height of the grid (number of rows).
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
