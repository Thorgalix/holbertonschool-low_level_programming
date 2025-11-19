#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	double f;
	int num;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}

		if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");

		}
		if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f ? f : "(nil)");
		}


		i++;
	}

	va_end(args);
	printf("\n");
}
