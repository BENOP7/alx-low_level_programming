#include <stdio.h>

/**
 * main - prints single digits separated by commas
 *
 * Return: 0 as exit code (Success)
 */
int main(void)
{
	int line_break = 10;
	int comma = 44;
	int space = 32;
	int num = 48;
	int m;

	for (m = num; m < num + 10; m++)
	{
		putchar(m);
		if (m == num + 9)
			break;
		putchar(comma);
		putchar(space);
	}
	putchar(line_break);
	return (0);
}
