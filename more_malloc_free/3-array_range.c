#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	void *p;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		((char *)p)[i] = min + 1;
	}
	return (p);
}
