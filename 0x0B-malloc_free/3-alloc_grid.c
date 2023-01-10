#include "main.h"

/**
 * alloc_grid - initialises every element of a 2D array to 0
 *
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the 2D arrray
*/
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width == 0 || height == 0)
		return (NULL);
	/* allocate memory for the whole array */
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* allocate space for each row */
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			/* if memory allocation for any row fails */
			/* free already allocated memory */
			for (j = 0; j < i; j++)
				free(grid[j]);
			/* then free memory allocated to the 2D array */
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
