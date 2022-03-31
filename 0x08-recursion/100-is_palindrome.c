#include "main.h"

/**
 * is_palindrome - checks if a string forms a palindrome
 * @s: the string
 * Return: 1 if palindrome;
 * Otherwise returns 0
 */
int is_palindrome(char *s)
{
	char *last = s + (_strlen(s) - 1);

	if (!*s)
		return (1);
	return (check_palindrome(s, last));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: the string
 * @last: pointer to corresponding characater
 * Return: a if palindrome;
 * Otherwise returns 0
 */
int check_palindrome(char *s, char *last)
{
	if (s >= last)
		return (1);
	if (*s == *last)
		return (check_palindrome(++s, --last));
	return (0);
}

/**
 * _strlen - returns the size of the string
 * @s: string
 * Return: string size
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(++s));
}
