#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - takes variable number of arguments of different types and prints
 * them
 * @format: string containing the format of the arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator,
							va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", separator,
							va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator,
						va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
		va_end(args);
		printf("\n");
}
