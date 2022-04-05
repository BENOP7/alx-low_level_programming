#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenate all the arguments of the program
 * @ac: size of argv
 * @av: argument list
 * Return: pointer to resulting string
 */
char *argstostr(int ac, char **av)
{
	char *buffer;
	int k = 0;
	int ch = 0;
	int i = 0;

	if (ac == 0 || av == (char **) 0)
		return ((char *) 0);

	while (k < ac)
	{
		int i = 0;

		while (*(av[k] + i))
		{
			i++;
			ch++;
		}
		k++;
	}

	buffer = (char *) malloc((ch + ac + 1) * sizeof(char));

	if (!buffer)
		return ((char *) 0);

	for (k = 0; k < (ac); k++)
	{
		int j = 0;

		while (*(av[k] + j))
			buffer[i++] = *(av[k] + j++);
		buffer[i++] = '\n';
	}

	buffer[i] = '\0';

	return (buffer);
}
