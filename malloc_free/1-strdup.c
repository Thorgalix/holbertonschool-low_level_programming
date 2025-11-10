#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates a string by allocating new memory
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *j;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len = len + 1;
	}
	j = malloc((len + 1) * sizeof(char));
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		j[i] = str[i];
	}
	j[len] = '\0';
	return (j);
}
