#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - select the correct function to perform arithmetic operation
 * @s: string containing operand
 * Return: pointer to op_function if string contains correct operand
 * else returns NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
