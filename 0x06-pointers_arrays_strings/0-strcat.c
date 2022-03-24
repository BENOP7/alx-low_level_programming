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
	char conc[len_dest + len_src];
	int j = 0;

	while (dest[j] != '\0')
	{
		conc[j] = dest[j];
		j++;
	}

	do {
		conc[j] = src[j];
                j++;
	} while (src[j] != '\0');

	conc[i] = '\0';

	return (conc);
}

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
