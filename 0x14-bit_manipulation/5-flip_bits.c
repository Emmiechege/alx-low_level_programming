#include "main.h"

/**
 * flip_bits - return number of bits needed to flip from one to another
 * @n: the integer to be flipped
 * @m: the integer to flip n to
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count_bits = 0;
	unsigned long int X_O_R;

	X_O_R = n ^ m;

	while (X_O_R > 0)
	{
		if (X_O_R & 1)
		{
			count_bits++;
		}
		X_O_R >>= 1;
	}
	return (count_bits);
}
