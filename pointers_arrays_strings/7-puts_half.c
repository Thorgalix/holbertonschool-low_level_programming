#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to print the second half of
 *
 * Description: if the length is odd, the function prints
 * the last (len - len/2)
 * characters.
 */
void puts_half(char *str)
{
	int len;
	int start;
	int i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	start = (len + 1) / 2;
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
