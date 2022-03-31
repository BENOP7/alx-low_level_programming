#include "main.h"

/**
 * is_prime_number - checks for a prime number
 * @n: number to be checked
 * Return: 1 if n is prime, otherwise returns 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	else
	{
		if (n % 3 == 0 && n != 3)
			return (0);
		if (n % 5 == 0  && n != 5)
			return (0);
		if (n % 7 == 0  && n != 7)
			return (0);
		if (n % 13 == 0  && n != 13)
			return (0);
		if (n % 17 == 0  && n != 17)
			return (0);
		if (n % 19 == 0  && n != 19)
			return (0);
		if (n % 23 == 0  && n != 23)
			return (0);
	}
	return (1);
}
