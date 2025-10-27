#include <stdio.h>
/*
 * main - programme qui affiche les nombres de 1 à 100
 *         en remplaçant certains nombres par des mots :
 *         - multiples de 3 : "Fizz"
 *         - multiples de 5 : "Buzz"
 *         - multiples de 3 et 5 : "FizzBuzz"
 * Chaque élément est séparé par un espace et un retour à la ligne
 * est ajouté à la fin.
 */
int main (void)

{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	i++;
	}
	printf("\n");
	return (0);
}
