#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from a starting point till it reaches 98
 * @n: starting number
 * Return: void
 */
void print_to_98(int n)
{
	int k;

	for (k = n; k <= 98; k++)
	{
		if (k == 98)
		{
			printf("%d", k);
			break;
		}
		printf("%d, ", k);
	}
}
