#include "3-calc.h"
#include <string.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s: operator passed as argument
 *
 * Return: pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
