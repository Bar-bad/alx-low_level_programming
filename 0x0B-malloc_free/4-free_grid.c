#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function that frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: the grid to free
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int counter;

	if (grid == NULL || height == 0)
		return;

	for (counter = 0; counter < height; counter++)
		free(grid[counter]);

	free(grid);
}
