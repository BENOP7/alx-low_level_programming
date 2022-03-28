#include "main.h"

/**
 * _strstr - locates a substrings in another string
 * @haystack: string to be searched
 * @needle: substring
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = 0;

	while (*haystack)
	{
		if (*haystack == *needle && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}

	return (p);
}

/**
 * compare - compares two strings
 * @a: string a
 * @b: string b
 * Return: 1 if a equals b, otherwise 0
 */
int compare(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
			return (0);
		a++;
		b++;
	}
	return (1);
}
