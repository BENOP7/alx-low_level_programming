#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of file compiled from
 *
 * Return: 0
 */
int main(void)
{
	char *name = __FILE__;

	printf("%s\n", name);

	return (0);
}
