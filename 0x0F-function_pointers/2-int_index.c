#include "function_pointers.h"

/**
 * int_index - searches for an integer in the provided array
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to function that takes an int and returns an int
 * Return: index of first occurence of the integer otherwise, returns -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i++]))
			return (--i);
	}
	return (-1);
}
