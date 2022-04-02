#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments passed
 * @argc: size of argv
 * @argv: list of arguments
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (**argv)
	{
		if ((argc - 1) < 10)
			_putchar('0' + (argc - 1));
		else
		{
			_putchar('1');
			_putchar('0' + ((argc - 1) % 10));
		}
		_putchar('\n');
	}

	return (0);
}
