#include <stdio.h>

/**
 * main - prints different combinations of double digits with a spaces
 * between them
 * Return: exits with 0 as return value
 */
int main(void)
{
	const int MAX = 99;
	int space = 32;
	int comma = 44;
	int line_break = 10;
	const int ZERO = 48;
	int a;
	int b;

	for (a = 0; a < MAX + 1; a++)
	{
		for (b = a + 1; b < MAX + 1; b++)
		{
			int tmp_digit = ZERO + (a / 10);

			putchar(tmp_digit);
			tmp_digit = ZERO + (a % 10);
			putchar(tmp_digit);
			putchar(space);
			tmp_digit = ZERO + (b / 10);
			putchar(tmp_digit);
			tmp_digit = ZERO + (b % 10);
			putchar(tmp_digit);
			if (a == 98 && b == 99)
				break;
			putchar(comma);
			putchar(space);
		}
	}
	putchar(line_break);
	return (0);
}
