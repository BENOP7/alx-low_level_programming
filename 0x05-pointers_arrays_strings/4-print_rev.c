#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	char *tp = s;

	while (*tp != '\0')
	{
		tp = tp + 1;
	}

	while (tp <= s)
	{
		tp = tp - 1;
		_putchar(*tp);
	}

	_putchar('\n');
}
