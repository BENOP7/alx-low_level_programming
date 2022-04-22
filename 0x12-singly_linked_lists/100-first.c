#include <stdio.h>

/**
 * first - prints a string before the main function is called
 *
 * Return: void
 */
void __attribute__((constructor)) first()
{
	printf(
	"You're bear! and yet, you must allow,\nI bore my house upon my back!\n"
	);
}
