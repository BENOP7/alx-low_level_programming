#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: pointer to str
 */
char *rot13(char *str)
{
	int i = 0;
	int j;
	int k;
	char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		'w', 'x', 'y', 'z'};
	char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z'};

	while (str[i] != '\0')
	{
		for (j = 0; j < 26; j++)
		{
			if (str[i] == lower[j])
			{
				str[i] = lower[(j + 13) % 26];
				break;
			}
			else if (str[i] == upper[j])
			{
				str[i] = upper[(j + 13) % 26];
				break;
			}
		}
		i++;
	}

	return (str);
}
