#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the prefix substring
 *
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		char *p = accept;

		while (*p && *p != *s)
		{
			p++;
		}
		if (!*p)
		{
			break;
		}
		len++;
		s++;
	}
	return (len);
}
