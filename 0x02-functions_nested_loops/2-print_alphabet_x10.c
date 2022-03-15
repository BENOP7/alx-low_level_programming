#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alphabets[i]);
		}
		_putchar('\n');
	}
}
