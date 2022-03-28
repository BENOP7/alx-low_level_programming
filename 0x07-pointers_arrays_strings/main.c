#include "main.h"
#include <stdio.h>

/**
 * main - test
 *
 * Return: 0
 */
int main(void)
{
	char a[40] = {48};
	char c = 32;
	int i;

	_memset(a, c, 20);

	for (i = 0; i < 40; i++)
	{
		if(i % 10)
			putchar(' ');
		if (i && !(i % 10))
			putchar('\n');
		printf("%2x", a[i]);
	}
	return (0);
}
