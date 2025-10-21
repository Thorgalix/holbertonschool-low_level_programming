#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme : Affiche des chiffres
* avec putchar + transmet ASCII
*
* Return: 0 si réussi
*/
int main(void)
{
	int number;

	for (number = 0 ; number <= 9 ; number++)
	{
		putchar(number + '0');
	}

	putchar('\n');

	return (0);
}
