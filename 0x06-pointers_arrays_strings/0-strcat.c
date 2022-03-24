#include "main.h"

int _strlen(char *s);

/**
 * _strcat - concatenates two strings
 * @dest: string to which other string should be copied
 * @src: string to be concatenated
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len_dest = _strlen(dest);
	int len_src = _strlen(src);
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	do {
		dest[j] = src[j - len_dest];
		j++;
	} while (src[j - len_dest] != '\0');

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
