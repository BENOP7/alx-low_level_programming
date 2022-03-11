#include <stdio.h>

/**
 * main - prints the different possible combinbations of 3 digits
 *
 * Return: 0 if Successful
 */
int main(void)
{
	int i;
	int j;
	int k;
	int comma = 44;
	int space = 32;
	int line_break = 10;
	int digit = 48;

	for (i = digit; i < digit + 10; i++)
	{
		for (j = i + 1; j < digit + 10; j++)
		{
			for (k = j + 1; k < digit + 10; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == digit + 10 - 3 && j == digit + 10 - 2 && k == digit + 10 - 1)
					break;
				putchar(comma);
				putchar(space);
			}
		}
	}
	putchar(line_break);
	return (0);
}
