#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - do simple arithmetic
 * @argc: argument list size
 * @argv: argument list
 * Return: 0 (SUCCESS), 98 if argument number is incorrect,
 * 99 if operand if incorrect and 100 if on division by zero error
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	char *operator;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		return (99);
	}

	if ((!strcmp(operator, "/") || !strcmp(operator, "%")) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", f(num1, num2));

	return (0);
}
