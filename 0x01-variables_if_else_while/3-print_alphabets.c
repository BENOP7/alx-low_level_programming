#include <stdio.h>

/**
 * main - Prints lower case alphabets followed by upper case alphabets
 * then exits
 *
 * Return: exits with 0 as return value
 */
int main(void)
{
	int upper = 65;
	int lower = 97;
	int line_break = 10;

	for (int m = lower; m < lower + 26; m++)
		putchar(m);
	for (int n = upper; n < upper + 26; n++)
		putchar(n);
	putchar(line_break);
	return (0);
}
