#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a memory buffer containing a given string
 * @str: string
 * Return: pointer to memory containing string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *membuff;
	int j = 0;

	if (str == (char *) 0)
		return ((char *) 0);

	while (str[j])
	{
		j++;
	}

	membuff = (char *) malloc((j + 1) * sizeof(char));

	if (membuff == ((char *) 0))
		return ((char *) 0);

	for (i = 0; i <= j; i++)
	{
		membuff[i] = str[i];
	}

	return (membuff);
}
