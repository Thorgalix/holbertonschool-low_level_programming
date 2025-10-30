#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	char *p = s;
	int capitalize = 1;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z' && capitalize)
		{
			*p -= 32;
			capitalize = 0;
		}
		else if (*p == ' ' || *p == '\t' || *p == '\n' ||
				*p == ',' || *p == ';' || *p == '.' ||
				*p == '!' || *p == '?' || *p == '"' ||
				*p == '(' || *p == ')' || *p == '{' || *p == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
		p++;
	}
	return (s);
}
