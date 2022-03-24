#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
	n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	putchar('0' + n % 10);
}
