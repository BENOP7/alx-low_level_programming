#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of numbers
 * @argc: size of argument list
 * @argv: list of arguments
 * Return: 0 (success); non-zero otherwise
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	int tmp;
	char *err = "Error";

	for (i = 1; i < argc; i++)
	{
		tmp = _atoi(argv[i]);

		if (check_number(argv[i]) && tmp != -999)
		{
			sum += tmp;
			continue;
		}
		else
		{
			print_error(err);
			return (1);
		}
	}

	print_number(sum);
	_putchar('\n');
	return (0);
}

/**
 * print_error - prints error message
 * @msg: message error
 * Return: void
 */
void print_error(char *msg)
{
	int e = 0;

	while (msg[e])
	{
		_putchar(msg[e]);
		e++;
	}
	_putchar('\n');
}

/**
 * check_number - check if string contains only numbers
 * @s: string
 * Return: 1 if contains only numbers otherwise returns 0
 */
int check_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && i == 0)
			continue;
		if (s[i] < '0' && s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
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
