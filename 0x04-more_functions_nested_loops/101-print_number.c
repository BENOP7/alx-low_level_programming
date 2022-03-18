#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
		n *= -1;

	int trunc = calc_trunc(n);
	int tmp_dgt;

	while (trunc != 0)
	{
		tmp_dgt = n / trunc;
		n = n - tmp_dgt * trunc;
		trunc /= 10;
		print_digit(tmp_dgt);
	}

}

/**
 * print_digit - prints number digit by digit
 * @digit: input digit
 * Return: void
 */
void print_digit(int digit)
{
	if (digit < 0)
	{
		_putchar('0' + (digit * -1));
	}
	else
	{
		_putchar('0' + digit);
	}
}

/**
 * count_digit - counts digits in a number
 * @n: number
 * Return: number of digits in number
 */
int count_digit(int n)
{
	int count = 0;

	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return (count);
}

/**
 * calc_trunc - computes the initial trunc value of a number
 * @n: number
 * Return: value of trunc
 */
int calc_trunc(int n)
{
	int trunc = 1;
	int p;

	for (p = 0; p < count_digit(n) - 1; p++)
	{
		trunc *= 10;
	}

	return (trunc);
}
