#include "main.h"

/**
 * get_bit - print the binary form of a number
 * @n: number
 * @index: index of the bit we want to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int bit = -1;

	if (index > 0)
		bit = get_bit((n >> 1), index - 1);
    else
        bit = n & 1;

    return (bit);
}
