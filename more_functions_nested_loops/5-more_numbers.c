#include "main.h"

/**
* more_numbers - Function for print 0 to 14
* @line - 10 lines
* @number - 0 to 14
*
*/

void more_numbers(void)

{
	int line;
	int number;

	for (line = 0; line < 10; line++)
	{
		for (number = 0 ; number <= 14 ; number++)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
