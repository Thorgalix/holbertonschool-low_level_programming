#include "comp.h"
#include <string.h>
#include <stdio.h>
/**
 * get_cmp_func - selects the correct comparison function
 * @s: comparator passed as argument
 *
 * Return: pointer to the function that corresponds to the comparator
 */
int (*get_cmp_func(char *s))(int a, int b)
{
	int i;

	comp_t cmp[] = {
		{"<", is_less},
		{">", is_greater},
		{"==", is_equal},
		{"!=", is_diff},
		{NULL, NULL},
	};
	for (i = 0; i < 4; i++)
	{
		if (strcmp(s, cmp[i].cp) == 0)
		{
			return (cmp[i].f);
		}
	}
	return (NULL);
}
