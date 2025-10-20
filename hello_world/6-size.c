#include <stdio.h>
/**
* main - fonction
*
* Fonction du programme: Affiche la taille des différents types
* sur l'ordinateur par lequel il est compilé
*
* Return: 0 si réussi
*/
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
