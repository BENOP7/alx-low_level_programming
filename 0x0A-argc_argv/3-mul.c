#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print product of two numbers
 * @argc: size of argument list
 * @argv: list of arguments
 * Return: 0 (success); non-zero otherwise
 */
int main(int argc, char **argv)
{
	int e = 0;
	char *err = "Error";

	if (argc == 3)
	{
		int a = _atoi(argv[1]);
		int b = _atoi(argv[2]);

		print_number(a * b);
		_putchar('\n');
	}
	else
	{
		while (err[e])
		{
			_putchar(err[e]);
			e++;
		}
		_putchar('\n');
		return (1);
	}

	return (0);
}

/**
 * _atoi - returns an integer from a string
 * @s: string
 * Return: integer value
 */
int _atoi(char *s)
{
	int i;
	int number = 0;
	int negative = 0;

	if (s[0] == '-')
		negative = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			number *= 10;
			number += (s[i] - '0');
		}
		else
		{
			if (s[i] != '-')
				return (-999);
		}
	}

	if (negative)
		number = -number;
	return (number);
}

/**
 * print_number - prints a number
 * @n: the number
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
