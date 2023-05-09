#include "search_algos.h"


/**
 * recursive_search - tries to find the index of the searched value
 * recursively
 * @array: the list of numbers
 * @min: mininum index of the array
 * @max: maximum index of the array
 * @value: the value of the search term
 *
 * Return: index of the searched value,
 */
int recursive_search(int *array, int min, int max, int value)
{
	int midI = (min + max) / 2;
	int index = midI;
	int i = 1;

	if (min > max)
		return (-1);
	printf("Searching in array: %d", array[min]);
	for (i = i + min; i <= max; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");

	if (array[midI] == value)
		return (index);
	if (value < array[midI])
		index = recursive_search(array, min, midI - 1, value);
	else
		index = recursive_search(array, midI + 1, max, value);

	return (index);
}


/**
 * binary_search - searches a value in an array of integers using the binary
 * search algorithm
 * @array: the array of integers
 * @size: the length of the array of integers
 * @value: the search term
 *
 * Return: the index of the term if found, otherzise returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	return (recursive_search(array, 0, size - 1, value));
}
