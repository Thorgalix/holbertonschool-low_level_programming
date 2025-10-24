#include <stdio.h>


int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int b;

	for (b = 0; a[b] != '\0'; b++)
	putchar(a[b]);
	putchar('\n');

	return (1);
}
