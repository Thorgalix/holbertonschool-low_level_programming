#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the 2D array, or NULL if allocation fails
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **tab;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	tab = malloc(height * sizeof(int *));
	if (tab == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));
		if (tab[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tab[j]);
			}
			free(tab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tab[i][j] = 0;
		}
	}
	return (tab);
}
