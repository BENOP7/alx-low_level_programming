#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a character
 * @size: size of the array to create
 * @c: character to initialize array
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (!p)
		return (0);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
