#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: numbers of strings passed
 * @..: variable arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

		char *str;

	va_list this_list;

	va_start(this_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(this_list, char *);

		if (str == NULL)
		{

			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(my_list);
}
