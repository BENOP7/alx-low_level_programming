#include "main.h"

/**
 * _sqrt_recursion - computes the square root of a number
 * @n: number
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	for (i = 2; i <= (n / 2); i++)
	{
		if ((i * i) == n)
			return (i);
	}
	return (-1);
}
