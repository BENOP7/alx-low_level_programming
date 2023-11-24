#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index of the bit we want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int comparator = 1;
    unsigned long int temp;

    while (index != 0)
    {
        comparator *= 2;
        index--;
    }

    *n = *n & (-comparator);

    return (1);
}
