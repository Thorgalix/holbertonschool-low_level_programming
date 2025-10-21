#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme : Affiche 1-9
* avec une virgule et un espace entre chaque
*
* Return: 0 si réussi
*/
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}

		number++;
	}


	putchar('\n');
	return (0);
}
