#include "3-calc.h"

/**
 * op_add - add two number
 * @a: first number
 * @b: second number
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two number
 * @a: first number
 * @b: second number
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{

	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	if (!b)
		return (100);
	else
		return (a / b);
}

/**
 * op_mod - compute remainder of division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of the division a/b
 */
int op_mod(int a, int b)
{
	if (!b)
		return (100);
	return (a % b);
}
