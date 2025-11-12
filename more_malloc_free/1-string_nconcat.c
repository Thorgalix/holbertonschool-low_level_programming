#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to the newly allocated space in memory
 *         containing the concatenated string
 *         NULL if the allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2, tot;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;
	if (n >= l2)
	{
		tot = l1 + l2 + 1;
	}
	else
	tot = l1 + n + 1;
	p = malloc(tot * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n && j < l2; j++)
	{
		p[i + j] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
