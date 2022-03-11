#include <stdio.h>

/**
 * main - Prints the lower case alphabets and exits
 *
 * Return: returns 0 as exit value
 */
int main(void)
{
	int ch = 97;

	for (int a = ch; a < ch + 26; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
