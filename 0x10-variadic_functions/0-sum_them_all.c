#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums all its parameters
 * @n: number of inputs
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	unsigned int sum = 0;

	va_list this_list;

	if (n == 0)
	{
		return (0);
	}
	va_start(this_list, n);

	for (i = 0; i < n; i++)
	{
		sum = += va_arg(this_list, int);
	}
	va_end(ths_list);

	return (sum);
}
}
