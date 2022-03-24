#include "main.h"
#include <stdio.h>

/**
 * main - program
 *
 * Return: 0
 */
int main(void)
{
	int n[10] = {1, 4, 45, 2, 6, 9, 0, 3, 1, 1};
	int i;
	char s[200] = "Ghetto (are)a mess But !ell it's...";


/**	for (i = 0; i < 10; i++)
		printf("%d ", n[i]); */
	printf("%s\n", leet(s));

	return (0);
}
