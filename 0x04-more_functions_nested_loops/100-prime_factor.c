#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	long long num = 612852475143;
	long div = 2;
	long largest = 0;

	while (num != 1)
	{
		if (num % div == 0)
		{
			num /= (long long) div;
			largest = div;
		}
		div++;
	}

	printf("%ld\n", largest);

	return (0);
}
