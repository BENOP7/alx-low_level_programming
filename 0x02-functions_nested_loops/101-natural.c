#include "main.h"
#include <stdio.h>

/**
 * main - calculates multiples of 3 or/and 5 less than 1024
 * Return: always 0
 */
int main(void)
{
	sum_multiples();
	return (0);
}

/**
 * sum_multiples - sums multiples of 3 or/and 5 less than 1024
 * Return: total sum
 */
int sum_multiples(void)
{
	int n;
	int sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	return (sum);
}
