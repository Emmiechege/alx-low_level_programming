#include "main.h"

int get_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: variable whose square root we are finding.
 * Return: natural square root of n.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (get_sqrt(n, root));
}

/**
 * get_sqrt - Finds the natural square root of the input number
 * @num: number whose square root is being founf.
 * @root: root to be tested.
 * Return: the square root, if the number has a natural square root
 * else,return -1.
 */

int get_sqrt(int num, int root)
{
	if (root * root == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (get_sqrt(num, root + 1));
}
