#include "main.h"

/**
 * _isupper - checks if a character if upper case
 * @c: input character
 * Return: 1 if c is upper
 * otherwise returns 0;
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
