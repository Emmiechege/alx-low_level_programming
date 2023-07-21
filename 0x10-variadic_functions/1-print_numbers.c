#include "variadic_functions"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * ...: variable number of names to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int i;

	va_list this_list;

	va_start(this_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(this_list, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(this_list);
}



