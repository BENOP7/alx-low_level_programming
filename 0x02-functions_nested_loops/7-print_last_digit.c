#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be computed
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	if (n % 10 < 0)
		n = (n % 10) * -1;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
