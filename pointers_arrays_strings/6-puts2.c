#include "main.h"
/**
 * puts2 - print 1 of 2 characters
 * @str: pointer str
 *
 * Return: 02468
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
