#include "main.h"

/**
 *print_alphabet - prints letters abcd...
 * Description: prints lower case alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char arr[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
}
