#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate a string with the first n bytes of another
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory containing the resulting
 * string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int j = 0;
	unsigned int i = 0;
	
	if (n < len2)
		s = malloc(sizeof(*s) * (len1 + n + 1));
	else
		s = malloc(sizeof(*s) * (len1 + len2 + 1));
	if (!s)
		return ((char *) 0);

	while (*s1)
	{
		s[i++] = *s1++;
	}

	for (j = 0; j < n; j++)
	{
		if (!s2[j])
			break;
		s[i++] = s2[j];
	}

	s[i] = '\0';
	return (s);
}
