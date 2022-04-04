#include "main.h"

/**
 * _strchr - returns pointer to a character in a string
 * @s: string
 * @c: character to search
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{
	char *p = 0;

	while (*(s++))
	{
		if (*s == c)
			return (s);
	}

	return (p);
}
