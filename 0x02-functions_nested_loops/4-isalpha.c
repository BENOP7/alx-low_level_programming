#include "main.h"

/**
 * _isalpha - checks alphabets
 * @c: character input as integer
 * Return: 1 if c is a letter (i.e. uppercase or lowercase)
 * Otherwise, returns 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
