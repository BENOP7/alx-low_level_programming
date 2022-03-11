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
	int m;
	int n;

	for (m = lower; m < lower + 26; m++)
		putchar(m);
	for (n = upper; n < upper + 26; n++)
		putchar(n);
	putchar(line_break);
	return (0);
}
