#include "main.h"

/**
* main - fonction _putchar
*
* Fonction du programme : affiche _putchar
*
* Return: 0 si réussi
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);

	_putchar('\n');
}