#include <unistd.h>
/**
 * main - prints a quote to the standard error
 *
 * Return: 1 (error code)
 */

int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, a, sizeof(a) - 1);

	return (1);
}
