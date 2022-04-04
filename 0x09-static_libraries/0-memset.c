#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant bytes
 * @n: fills till the nth byte
 * @b: constant byte
 * @s: memory location
 * Return: pointer to memory loaction
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
