#include "3-calc.h"

/**
 * op_add -function that adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - functio that multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: numerator
 * @b: denominator
 * Return: remainder of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function that returns the remainder
 * @a: numerator
 * @b: denominator
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
