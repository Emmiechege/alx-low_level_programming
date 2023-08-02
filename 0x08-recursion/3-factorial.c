#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: number to be manipulated.
 * Return: -1(n < 0), 1(n == 0)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

