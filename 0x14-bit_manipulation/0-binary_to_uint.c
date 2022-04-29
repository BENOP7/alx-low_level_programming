#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string containing a binary
 * Return: unsigned decimal number on sucess; otherwise return 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			res = 2 * res + *b - '0';
			++b;
			continue;
		}
		return (0);
	}

	return (res);
}
