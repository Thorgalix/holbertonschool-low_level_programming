#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme : Affiche l'alphabet à l'envers
*
* Return: 0 si réussi
*/
int main(void)
{
	char za;

	for (za = 'z' ; za >= 'a' ; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
