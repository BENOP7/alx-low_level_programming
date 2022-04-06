#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the program's name and all arguments
 * @argc: size of argument list
 * @argv: list of arguments
 * Return: 0 (success); non-zero otherwise
 */
int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	for (; i < argc; i++)
	{
		while (*(*(argv + i) + j))
			_putchar(*(*(argv + i) + j++));
		j = 0;
		_putchar('\n');
	}

	return (0);
}
