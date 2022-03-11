#include <stdio.h>

/**
 * main - prints alphabets in reverse order
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int line_break = 10;
	int ch = 122;
	int first = 97;
	int m;

	for (m = ch; m >= first; m--)
		putchar(m);
	putchar(line_break);
	return (0);
}
