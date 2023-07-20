#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: any variable type
 * Return: Nothing
 **/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list ls;

	va_start(ls, format);

	if (format)
	{
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ls, int));
				break;
			case 'i':
				printf("%s%i", sep, va_arg(ls, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ls, double));
				break;
			case 's':
				str = va_arg(ls, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
					continue;
		}
		sep = ", ";
		i++;
	}
}

printf("\n");
va_end(ls);
}
