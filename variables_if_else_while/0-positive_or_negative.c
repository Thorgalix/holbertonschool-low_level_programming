#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme: Affiche un nombre aléatoire, si >0 is positive
* si =0 is zero
* si <0 is negative
*
* Return: 0 si réussi
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
