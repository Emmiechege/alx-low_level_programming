#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary of a number
 * @n: number to be printed to binary
 * Returns: nothing
 */

void print_binary(unsigned long int n)
{
	/* base case; if n is greater than 1, continue the reccursion */
	if (n > 1)
	{
		/* reccursive call; Right shift n by 1 and call print_binary */
		print_binary(n >> 1);
	}
	/* print the least significant bit of n */
	putchar((n & 1) + '0');
}
