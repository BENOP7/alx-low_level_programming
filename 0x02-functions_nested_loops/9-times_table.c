#include "main.h"

/**
 * times_table - prints times table of 9
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int tmp = i * j;

			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}
			if (tmp < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (i * j));
				if (j != 9)
					_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (tmp / 10));
				_putchar('0' + (tmp % 10));
				if (j != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
