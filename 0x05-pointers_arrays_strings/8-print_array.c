#include "main.h"
#include <stdio.h>

/**
 * print_array - prints first n elements of an array
 * @n: number of elements to be printed
 * @a: array
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count != n)
	{
		if (count < n - 1)
		{
			printf("%d, ", a[count]);
			continue;
		}

		printf("%d\n", a[count]);
	}
}
