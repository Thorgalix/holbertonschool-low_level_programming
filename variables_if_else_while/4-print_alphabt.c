#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme : Affiche l'alphabet
* avec putchar en exluant q et e
*
* Return: 0 si réussi
*/
int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
	{
		if (az != 'q' && az != 'e')
		putchar(az);
	}
	putchar('\n');

	return (0);
}
