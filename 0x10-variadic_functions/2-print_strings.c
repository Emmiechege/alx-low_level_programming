#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings.
 * @separator: separates strings.
 * @n: number of strings passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	/* declare a va_list to hols the variable arguments*/
	va_list args;

	/* initialize the va_list to point to the first variable argument */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Retrieves the last argument assuming its a character pointer(string)*/
		str = va_arg(args, char *);

		/*prints the string or (nil) if the string is NULL*/
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		/* checks if we are not at the last iterator and the separator is not NULL*/
		if (i != n - 1 && separator != NULL)
		{
			/*prints the separator*/
			printf("%s", separator);
		}
	}
	/* cleans up the va_list */
	printf("\n");
	va_end(args);
}
