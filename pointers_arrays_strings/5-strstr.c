#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring to locate
 *
 * Return: pointer to the beginning of the located substring
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
