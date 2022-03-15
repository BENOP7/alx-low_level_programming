#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer input
 * Return: returns positive value of number (its magnitude)
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
