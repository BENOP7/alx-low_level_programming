include "main.h"

/**
 * is_prime_number - checks for a prime number
 * @n: number to be checked
 * Return: 1 if n is prime, otherwise returns 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
	{
		if (n % 3 == 0)
			return (0);
		if (n % 5 == 0)
			return (0);
		if (n % 7 == 0)
			return (0);
		if (n % 13 == 0)
			return (0);
		if (n % 17 == 0)
			return (0);
		if (n % 19 == 0)
			return (0);
		if (n % 23 == 0)
			return (0);
	}
	return (1);
}
