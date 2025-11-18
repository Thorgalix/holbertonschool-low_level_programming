#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[3]);
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		return (1);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && y == 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", op(x, y));
	return (0);
}
