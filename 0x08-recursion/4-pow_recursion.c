#include "main.h"

/**
 * _pow_recursion - calculates the power of a number
 * @x: base number
 * @y: power
 * Return: result of the operation x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
