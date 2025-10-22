#include "main.h"

/**
 * print_last_digit - print last digit
 * of a number
 * @n: the numbre to check
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar(ld + '0');
	return ld;
}
