#include "main.h"

/**
 * print_binary - print the binary form of a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n / 2)
		print_binary(n / 2);
	_putchar(n % 2 + '0');
}
