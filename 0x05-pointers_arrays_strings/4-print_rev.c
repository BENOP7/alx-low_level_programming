#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	char *tp = s;
	char *i;

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	while (*tp != '\0')
	{
		tp = tp + 1;
	}

	for (i = tp - 1; i >= s; i -= 1)
	{
		_putchar(*i);
	}
	_putchar('\n');
}
