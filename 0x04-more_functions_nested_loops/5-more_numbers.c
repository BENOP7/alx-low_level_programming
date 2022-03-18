#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int j;
	
	for (j = '0'; j <= '9'; j++)
	{
		for (n = 1; n <= 14; n++)
		{
			print_digits(n);
		}

		_putchar('\n');
	}
}

void print_digits(int n)
{
	int trunc = 10;
	int tmp;

	if (n >= '0' && n <= '9')
	{
		_putchar(n);
		return;
	}

	while (trunc != 0)
	{
		tmp = n / trunc;
		n -= tmp * trunc;
		trunc /= 10;
		_putchar(tmp);
	}
}
