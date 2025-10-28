#include "main.h"
/**
 * _puts - return length of a string
 * @str: pointer str
 *
 * Return: length of string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
