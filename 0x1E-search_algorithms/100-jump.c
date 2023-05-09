#include "search_algos.h"

/**
 * jump_search - searcheds a value in an array of integers sequentially
 * @array: the array of integers
 * @size: the length of the array of integers
 * @value: the search term
 *
 * Return: the index of the term if found, otherzise returns -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[(int) fmin(b, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = b;
		b += sqrt(size);
		if (a > size)
			return (-1);
	}

	if (a == 0)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	}
	else
	{
		b = a;
		a =  a - (size_t) sqrt(size);
		printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	}
	while (array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a++;
		if (a > (size_t) fmin(b, size))
			return (-1);
	}

	if (array[a] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		return (a);
	}
	return (-1);
}
