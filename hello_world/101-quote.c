#include <unistd.h>


int main(void)
{
	char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, a, sizeof(a) - 1);

	return (1);
}
