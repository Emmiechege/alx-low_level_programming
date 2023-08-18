#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: number of inputs.
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	unsigned int sum = 0;

	va_list this_list;

	if (n == 0)
	{
		return (0);
	}
	va_start(this_list, n);

	for (index = 0; index < n; index++)
	{
		sum = sum + va_arg(this_list, int);
	}
	return (sum);
}

