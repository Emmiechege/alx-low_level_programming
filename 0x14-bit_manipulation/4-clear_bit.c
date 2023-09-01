#include "main.h"

/**
 * clear_bit - sets the value of a bit to zero
 * @n: pointer to an integer
 * @index: position to set the values of bit
 * Return: 1 if success, 0 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit_mask = ~(1ul << index);

	*n = bit_mask & *n;
	return (10);
}
