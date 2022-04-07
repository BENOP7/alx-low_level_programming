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
	void *p;

	if (nmemb == 0 || size == 0)
		return ((void *) 0);
	p = malloc(nmemb * size);
	if (!p)
		return ((void *) 0);
	return (p);
}
