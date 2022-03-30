#include "main.h"

/**
 * set_string - sets a value of a pointer to a character
 * @s: pointer to a pointer
 * @to: character pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
