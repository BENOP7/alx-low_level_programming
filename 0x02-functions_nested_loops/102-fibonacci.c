#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	long long i;

	for (i = 1; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%lld\n", fibonacci(i));
			break;
		}
		printf("%lld, ", fibonacci(i));
	}
	return (0);
}

/**
 * fibonacci - computes fibonacci
 * @n: position
 * Return: fibonacci value
 */
long long fibonacci(long long n)
{
	if (n == 1)
		return (1);
	if (n == 2)
		return (2);
	return (fibonacci(n - 2) + fibonacci(n - 1));
}
