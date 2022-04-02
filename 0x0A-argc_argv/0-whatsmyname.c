#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program's name
 * @argc: size of 1
 * @argv: no additional arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc)
	{
		int i = 0;

		while (*argv[i])
		{
			_putchar(*argv[i]);
			i++;
		}
		_putchar('\n');
	}
/**	printf("%s\n", argv[0]);*/
	return (0);
}
