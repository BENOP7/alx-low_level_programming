#include "main.h"

/**
 * put_number - prints an integer
 * @n: number
 * Return: void
 */
void put_number(int n)
{
	if (n / 10)
		put_number(n / 10);
	_putchar('0' + n % 10);
}

/**
 * print_times_table - print the n times table
 * @n: integer input
 * Return: void
 */
void print_times_table(int n)
{
	const int F_LEN = 4;
	int i;
	int j;

	if (n < 0 || n > 15)
		return;

	if (!n)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		_putchar(',');

		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				continue;
			print_spaces(i * j, F_LEN);
			put_number(i * j);
			if (j != n)
				_putchar(',');
		}

		_putchar('\n');
	}
}

/**
 * count_digits - counts number of digits of a number
 * @num: input number to be counted
 * Return: number of digits of @num
 */
int count_digits(int num)
{
	int count = 0;

	if (num == 0)
		return (1);

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return (count);
}

/**
 * space_count - calculate spaces before each entry on table
 * @num: number to be placed on the table
 * @f_len: format length
 * Return: numberr of spaces (int)
 */
int space_count(int num, int f_len)
{
	return (f_len - count_digits(num));
}

/**
 * print_spaces - print spaces
 * @num: input number for the particular entry
 * @f_len: format length
 * Return: void
 */
void print_spaces(int num, int f_len)
{
	int spc_count = space_count(num, f_len);
	int i;

	for (i = 0; i < spc_count; i++)
	{
		_putchar(' ');
	}
}
