#include "search_algos.h"

/**
 * linear_search - searcheds a value in an array of integers sequentially
 * @array: the array of integers
 * @size: the length of the array of integers
 * @value: the search term
 *
 * Return: the index of the term if found, otherzise returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1); // not found
}
