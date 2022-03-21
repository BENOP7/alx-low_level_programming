#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	char *tp = s;

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	while (*tp != '\0')
	{
		tp = tp + 1;
	}

	while (tp >= s)
	{
		tp = tp - 1;
		_putchar(*tp);
	}

	_putchar('\n');
}
