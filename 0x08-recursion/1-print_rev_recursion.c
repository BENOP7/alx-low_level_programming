#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (!(*s))
		return;

	_print_rev_recursion(++s);


	_putchar(*s);
}
