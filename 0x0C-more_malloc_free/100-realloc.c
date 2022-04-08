#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate memory block using malloc
 * @ptr: pointer to memory block
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_p;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		free(ptr);
		p = malloc(new_size);

		if (!p)
			return ((void *) 0);
		return (p);
	}
	if (ptr && new_size == 0)
	{
		free(ptr);
		return ((void *) 0);
	}

	p = malloc(new_size);

	if (!p)
		return ((void *) 0);
	
	old_p = ptr;

	for (i = 0; i < old_size; i++)
	{
		p[i] = old_p[i];
	}

	free(ptr);

	return (p);
}
