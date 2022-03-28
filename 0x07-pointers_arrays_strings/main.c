#include "main.h"
#include <stdio.h>

/**
 * main - test
 *
 * Return: 0
 */
int main(void)
{
/*	char a[40] = "Jesus is the best";*/
	char a[] = "Hello World";
	char b[] = "World";

	printf("%s\n", _strstr(a, b));
/*	printf("%s\n", _strpbrk(a, b));

	printf("%d\n", _strspn(a, "best"));*/

/*	printf("string pointer %p\n", a);
	printf("character position: %ld\n", _strchr(a, ' ') - a);*/

/**	_memset(a, c, 20);

	for (i = 0; i < 40; i++)
	{
		if(i % 10)
			putchar(' ');
		if (i && !(i % 10))
			putchar('\n');
		printf("%2x", a[i]);
	}*/
	return (0);
}
