#include "main.h"
/**
 * swap_int - inverse les valeurs de 2 pointeurs
 * @a: pointeur a
 * @b: pointeur b
 */

void swap_int(int *a, int *b)
{
	int tempo = 0;

	tempo = *b;
	*b = *a;
	*a = tempo;
}
