#include "main.h"

/**
 * _memcpy - copies
 * @dest: memory area (destination)
 * @src: memory area (source)
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
			dest[i] = src[i];
		else
			break;

												i++;
	}

	while (dest[i] != '\0')
	{
		if (i < n)
		dest[i] = '\0';
		i++;
	}


	return (dest);
}
