#include "main.h"

/**
 * swap_int - swap values of two variables
 * @a: first variable pointer
 * @b: second variable pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
