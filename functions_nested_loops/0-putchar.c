#include "main.h"

/**
* main - fonction _putchar
*
* Fonction du programme : affiche _putchar
*
* Return: 0 si réussi
*/
int main(void)
{
	char p[] = "_putchar";
	int i = 0;
		while (i < 8)
	{
		_putchar(p[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
