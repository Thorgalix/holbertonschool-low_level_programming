#include "main.h"
/**
 * puts2 - print 1 of 2 characters
 * @str: pointer str
 *
 * Return: 02468
 */

void puts2(char *str)
{
	while (*str != '\0')
	{

		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
