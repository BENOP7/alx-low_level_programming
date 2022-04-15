#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - print numbers (with separator between them)
 * @separator: string to place between numbers
 * @n: number of numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list n_list;
	unsigned int i;
	int *nums = malloc(n * sizeof(int));

	if (!nums || !n)
	{
		printf("\n");
		return;
	}

	if (!separator)
		separator = "";

	va_start(n_list, n);

	for (i = 0; i < n; i++)
	{
		nums[i] = va_arg(n_list, int);
	}
	va_end(n_list);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", nums[i]);
			break;
		}
		printf("%d%s", nums[i], separator);
	}
	free(nums);
}
