#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program gets the last digit of a number and outputs whether this
 * digit is zero, less than six or greater than five.
 *
 * Return: returns 0 on completion
 */
int main(void)
{
	int last_digit;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((last_digit = n % 10) == 0)
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	else if (last_digit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	return (0);
}
