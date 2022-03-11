#include <stdio.h>

/**
 * main - Prints the lower case alphabets and exits
 *
 * Return: exits with return value 0
 */
int main(void)
{
	int ch = 97;
	int line_break = 10;

	for (int m = ch; m < ch + 26; m++)
		putchar(m);
	putchar(line_break);
	return (0);
}
