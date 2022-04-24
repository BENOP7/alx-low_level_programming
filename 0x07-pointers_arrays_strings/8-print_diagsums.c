#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - print sum of diagonals of a square 2D array of integers
 * @a: array
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	if (!a || size < 1)
		return;
	while (i < size)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(size * size - 1) - (i + 1) * (size - 1)];
		i += 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
