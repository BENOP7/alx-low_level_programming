#include "main.h"

/**
 * wildcmp - compares strings recursively using wildcards
 * @s1: 1st string
 * @s2: 2nd string
 * Return: 1 if string matches each other; 
 * otherwise returns 0
 */
int wildcmp(char *s1, char *s2)
{
	char *next1 = s1 + 1;
	char *next2 = s2 + 1;

	if (!*s1 && !*s2 || *s1 == '*' && !*next1 || *s2 == '*' && !*next2)
		return 1;
	if (*s2 == '*' && *next2)
	{
		if (*next2 == '*')
			return wildcmp(s1, next2);
		if(*s1 == *next2)
		{
			if (wildcmp(s1, next2))
				return 1;
			return wildcmp(next1, s2);
		}
		if(*next1 == *next2)
			return wildcmp(next1, next2);
		if (*next1)
			return wildcmp(next1, s2);
	}
	if (*s1 == '*' && *next1)
	{
		if (*next1 == '*')
			return wildcmp(next1, s2);
		if(*s2 == *next1)
		{
			if (wildcmp(s2, next1))
				return 1;
			return wildcmp(s1, next2);
		}
		if(*next1 == *next2)
			return wildcmp(next1, next2);
		if (*next2)
			return wildcmp(s1, next2);
	}
	if(*s1 == *s2)
		return wildcmp(next1, next2);
	return 0;
}
