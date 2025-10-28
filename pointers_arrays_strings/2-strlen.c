#include "main.h"
/**
 * _strlen - return length of a string
 * @s: pointer s
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
