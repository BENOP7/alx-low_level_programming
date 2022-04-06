#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of integers in memory
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to 2d array of integers
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width < 1 || height < 1)
		return ((int **) 0);

	grid = (int **) malloc(sizeof(int *) * height);

	if (!grid)
	{
		free(grid);
		return ((int **) 0);
	}

	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *) malloc(sizeof(int) * width);

		if (!*(grid + i))
		{
			free(grid[i]);
			return ((int **) 0);
		}

		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}

	}

	return (grid);
}
