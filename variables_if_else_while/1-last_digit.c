#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme: Affiche le dernier chiffre d'un nombre aléatoires
* si >5 is greater than 5
* si 0 is 0
* else is less than 6 and not 0
*
* Return: 0 si réussi
*/
int main(void)
{
int n, last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
printf("Last digit of %d is %d", n, last);
if (last > 5)
{
printf(" and is greater than 5\n");
}
else if (last == 0)
{
printf(" and is 0\n");
}
else
printf(" and is less than 6 and not 0\n");
return (0);
}
