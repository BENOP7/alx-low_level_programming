#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory space for a number of elements fo an array
 * @nmemb: number of elements in the array
 * @size: size of each array element
 * Return: pointer to allocated memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	while (i < nmemb)
	{
		p[i] = 0;
	}
	return (p);
}
