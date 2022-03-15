#include "main.h"

/**
 * _islower - checks if a char is lower case
 * @c: character input as an interger
 * Return: 1 if char is lower case
 * Otherwise returns 0;
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
