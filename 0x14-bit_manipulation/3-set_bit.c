#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to integer to use
 * @index: position to set the value of the bit
 * Return: 1 if succeess, else 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = ((1ul << index) | *n);
	return (1);
}
