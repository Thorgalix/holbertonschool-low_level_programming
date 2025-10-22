#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase, followed by a new line.
*
* Description: This function uses a loop to print
* all lowercase letters from 'a' to 'z' using _putchar,
* and then prints a newline character.
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);

	_putchar('\n');
}
