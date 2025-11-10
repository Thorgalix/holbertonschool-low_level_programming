#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings by allocating new memory
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string, or NULL if memory
 * allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int l1, l2, ltot, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	for (l2 = 0; s2[l2] != '\0'; l2++)
	ltot = l1 + l2 + 1;

	p = malloc(ltot * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		p[l1 + j] = s2[j];
	}
	p[l1 + l2] = '\0';
	return (p);
}
