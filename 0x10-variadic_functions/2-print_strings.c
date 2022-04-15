#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - print strings (with separator between them)
 * @separator: separator string
 * @n: number of strings to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list n_list;
	unsigned int i;
	char **strs = malloc(n * sizeof(*strs));

	if (!strs || !n)
	{
		printf("\n");
		return;
	}

	if (!separator)
		separator = "";

	va_start(n_list, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(n_list, char *);

		if (s)
			strs[i] = s;
		else
			strs[i] = "(nil)";
	}
	va_end(n_list);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%s\n", strs[i]);
			break;
		}
		printf("%s%s", strs[i], separator);
	}
	free(strs);
}
