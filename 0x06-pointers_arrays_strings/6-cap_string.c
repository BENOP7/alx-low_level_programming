#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: modified string - str
 */
char *cap_string(char *str)
{
	int i = 0;
	int wflag = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] + 'A' - 'a';
		}

		if (str[i] == ',' || str[i] == '.' || str[i] == '(' ||
			str[i] == ')' || str[i] == ';' || str[i] == '!' ||
			str[i] == '\"' || str[i] == '?' || str[i] == '{' ||
			str[i] == '}' || str[i] == ' ')
		{
			if (!wflag)
				wflag = 1;
		}

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (wflag)
			{
				str[i] = str[i] + 'A' - 'a';
				wflag = 0;
			}
		}

		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (wflag)
				wflag = 0;
		}

		i++;
	}

	return (str);
}
