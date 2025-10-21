#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme : Affiche les hexa jusqu'a 16
*
* Return: 0 si réussi
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
