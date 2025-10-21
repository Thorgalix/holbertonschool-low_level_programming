#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme : Affiche l'alphabet
* avec putchar
*
* Return: 0 si réussi
*/
int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
