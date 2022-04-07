#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i = min;

	if (min > max)
		return ((int *) 0);
	array = (int *) malloc(sizeof(*array) * (max - min + 1));

	if (!array)
		return ((int *) 0);

	while (i <= max)
	{
		array[i - min] = i;
		i++;
	}

	return (array);
}
