#include <stdio.h>

/**
 * main - prints hexadecimal digits as lower case and completes
 *
 * Return: exits with return value of 0
 */
int main(void)
{
	int zero = 48;
	int line_break = 10;
	int first_letter = 97;
	int m;
	int n;

	for (n = zero; n < zero + 10; n++)
		putchar(n);
	for (m = first_letter; m < first_letter + 6; m++)
		putchar(m);
	putchar(line_break);
	return (0);
}
