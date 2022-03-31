#include "main.h"

/**
 * _strlen_recursion - looks for the size of a string
 * @s: string
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen_recursion(++s));
}
