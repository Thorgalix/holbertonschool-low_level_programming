#include "main.h"

/**
* print_alphabet_x10 - Prints the alphabet in lowercase, followed by a new line
*
* Description: This function uses a loop to print
* all lowercase letters from 'a' to 'z' using _putchar,
* and then prints a newline character X 10.
*/
void print_alphabet_x10(void)
{
	int line;
	char c;

	for (line = 0; line < 10; line++)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
	}
}
