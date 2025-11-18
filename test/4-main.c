#include <stdio.h>
#include <stdlib.h>
#include "comp.h"
/**
 * main - compares two integers based on a comparator
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{

	int (*cmp)(int, int);
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	cmp = get_cmp_func(argv[2]);
	if (cmp == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("%s\n", cmp(a, b) ? "Oui" : "Non");
	return (0);
}
