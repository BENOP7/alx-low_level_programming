#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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
