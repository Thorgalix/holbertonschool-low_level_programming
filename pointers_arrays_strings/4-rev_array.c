#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
