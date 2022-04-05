#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to memory buffer conatining resultant string
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int len1 = 0;
	int len2 = 0;
	int k;

	if (s1 == (char *) 0)
		s1 = "";
	if (s2 == (char *) 0)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	mem = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	for (k = 0; *s1; k++)
	{
		mem[k] = *s1++;
	}

	for (; *s2; k++)
	{
		mem[k] = *s2++;
	}
	mem[k] = '\0';

	return (mem);
}
