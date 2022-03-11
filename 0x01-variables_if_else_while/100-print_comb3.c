#include <stdio.h>

/**
 * main - prints all possible different combinations
 * of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int digit = 48;
	int line_break = 10;
	int space = 32;
	int comma = 44;

	for (i = digit; i < digit + 10; i++)
	{
		for (j = i + 1; j < digit + 10; j++)
		{
			putchar(i);
			putchar(j);
			if (i == digit + 10 - 1 && j == digit + 10)
				break;
			putchar(comma);
			putchar(space);
		}
	}
	putchar(line_break);
	return (0);
}
