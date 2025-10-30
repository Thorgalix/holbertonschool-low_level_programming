#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	char *p = s;
	int i;

	while (*p)
	{
		for (i = 0; letters[i] != '\0'; i++)
		{
			if (*p == letters[i])
			{
				*p = numbers[i];
				break;
			}
		}
		p++;
	}
	return (s);
}
