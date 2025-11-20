#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *separ = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", separ, va_arg(args, int));
			separ = ", ";
			break;

			case 'i':
			printf("%s%d", separ, va_arg(args, int));
			separ = ", ";
			break;

			case 'f':
			printf("%s%f", separ, va_arg(args, double));
			separ = ", ";
			break;

			case 's':
			str = va_arg(args, char *);
			if (!str)
			{
				str = "(nil)";
			}
			printf("%s%s", separ, str);
			separ = ", ";
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
