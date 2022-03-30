#include "main.h"

/**
 * _puts_recursion - prints a string to stdout
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!(*s))
		return;

	_putchar(*(s++));
	_puts_recursion(s);
}
