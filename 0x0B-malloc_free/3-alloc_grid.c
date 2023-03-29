#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
		return (NULL);

	grid = (int **) malloc(sizeof(*grid) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		*(grid + i) = (int *) malloc(sizeof(int) * width);

		if (*(grid + i) == NULL)
		{	
			while (i-- < 0)
			{
				printf("%d ", i);
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			*(*(grid + i) + j) = 0;
		}

	}

	return (grid);
}
