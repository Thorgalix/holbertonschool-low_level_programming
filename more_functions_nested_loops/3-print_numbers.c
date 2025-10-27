#include "main.h"

/**
* print_numbers - Function for print 0 to 9
*
* Return: multiply a and b
*/

void print_numbers(void)

{
	int number;

	for (number = 0 ; number <= 9 ; number++)
	{
		_putchar(number + '0');
	}

	_putchar('\n');
}
