#include "main.h"

/**
 * free_grid - frees a 2D array
 *
 * @grid: pointer to 2D array
 * @height: height of the array
*/
void free_grid(int **grid, int height)
{
	int i;

	/* free memory allocated to each row */
	for (i = 0; i < height; i++)
		free(grid[i]);
	/* then free the 2D array */
	free(grid);
}
