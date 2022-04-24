#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_chessboard - prints a chessboard
 * @a: two dimensional array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	size_t i = 0;
	int j;

	if (!a)
		return;

	while (i < (sizeof(*a) / sizeof(**a)))
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
