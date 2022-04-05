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
	int j;

	while (!str[i])
	{
		i++;
	}

	char *membuff = (char *) malloc((i + 1) * sizeof(char));

	if (membuff == ((char *) 0))
		return ((char *) 0);

	for (j = 0; j <= i; i++)
	{
		membuff[j] = str[j];
	}

	membuff[j] = '\0';

	return (membuff);
}
