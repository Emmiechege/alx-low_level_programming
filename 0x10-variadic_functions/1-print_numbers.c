#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers.
 * @separator: saparates numbers.
 * @n: number of numbers/inputs.
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	/* declare a va_list to hold the variable arguments */
	va_list args;

	/* initialize the va_list to point to the fist variable argument */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* print the current argument, assuming its an int */
		printf("%d", va_arg(args, int));
		/* check if we are not at the last iteratot & separator is NULL*/
		if (i < n - 1 && separator != NULL)
		{
			/* print separator*/
			printf("%s", separator);
		}
	}
	printf("\n");

	/* clean up va_list */
	va_end(args);
}
