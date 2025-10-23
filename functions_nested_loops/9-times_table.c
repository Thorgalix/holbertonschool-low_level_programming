#include "main.h"

/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int i = 0, j, prod;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			prod = i * j;

			if (prod >= 10)
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else
			{
				if (j != 0)
				_putchar(' ');
				_putchar(prod + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
