#include "function_pointers.h"

/**
 * array_iterator - performs a procedure on every element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to a function that takes an integer as parameter and
 * returns nothing
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
		action(array[i++]);
}
