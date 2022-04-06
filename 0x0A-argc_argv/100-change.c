#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins to make change for a given amount
 * @argc: size of argument list
 * @argv: list of arguments
 * Return: 0 on completion otherwise returns non-zero
 */
int main(int argc, char **argv)
{
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
			printf("0\n");
		else
			printf("%d\n", minimum_coins(atoi(argv[1])));
		return (0);
	}

	return (0);
}

/**
 * minimum_coins - gets the minimum number of coins for a given amount
 * @n: amount
 * Return: minimum coins for n
 */
int minimum_coins(int n)
{
	if (n == 0)
		return (0);

	if (n / 25)
		return ((n / 25) + minimum_coins(n % 25));

	if (n / 10)
		return ((n / 10) + minimum_coins(n % 10));

	if (n / 5)
		return (n / 5 + minimum_coins(n % 5));

	if (n / 2)
		return (n / 2 + minimum_coins(n % 2));

	if (n / 1)
		return (1 + minimum_coins(n - 1));
	return (0);
}
