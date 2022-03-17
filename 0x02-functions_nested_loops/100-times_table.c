#include "main.h"

/**
 * print_times_table - print the n times table
 * @n: integer input
 * Return: void
 */
void print_times_table(int n)
{
	const int F_LEN = 4;

	if (n < 0 || n > 15)
		return;

	int i;
	int j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0');
			_putchar(',');
			print_spaces(i * j);
			print_num(i * j);
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

	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return (count);
}

/**
 * print_num - prints the number digit by digit
 * @num: number to be printed
 * Return: void
 */
void print_num(int num)
{
	int tmp_dgt;

	while (num != 0)
	{
		tmp_dgt = num % 10;
		num /= 10;
		_putchar('0' + tmp_dgt);
	}
}

/**
 * space_count - calculate spaces before each entry on table
 * @num: number to be placed on the table
 * Return: numberr of spaces (int)
 */
int space_count(int num)
{
	return (F_LEN - count_digits(num));
}

/**
 * print_spaces - print spaces
 * @num: input number for the particular entry
 * Return: void
 */
void print_spaces(int num)
{
	int spc_count = space_count(num);
	int i;

	for (i = 0; i < spc_count; i++)
	{
		_putchar(' ');
	}
}
