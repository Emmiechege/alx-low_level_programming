#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Entry point.
 * c = char,i = int, f = float, s = char * (if null print (nil))
 * @format: list of argument types.
 * Return: 0.
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int n = 0;
	int i = 0;
	char *sep = ", ";
	char *str;

	va_start(args, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
